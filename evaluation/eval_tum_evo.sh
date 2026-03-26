#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
GT_PATH="${REPO_ROOT}/data/tum/fr1_xyz/gt/groundtruth.txt"
EST_PATH="${REPO_ROOT}/results/traj/est.tum"
OUT_DIR="${REPO_ROOT}/results/metrics/default"
DELTA="1"
DELTA_UNIT="m"
T_MAX_DIFF="0.01"

while [[ $# -gt 0 ]]; do
  case "$1" in
    --gt) GT_PATH="$2"; shift 2 ;;
    --est) EST_PATH="$2"; shift 2 ;;
    --out) OUT_DIR="$2"; shift 2 ;;
    --delta) DELTA="$2"; shift 2 ;;
    --delta-unit) DELTA_UNIT="$2"; shift 2 ;;
    --t-max-diff) T_MAX_DIFF="$2"; shift 2 ;;
    *) echo "[ERROR] Unknown argument: $1"; exit 1 ;;
  esac
done

command -v evo_ape >/dev/null 2>&1 || { echo "[ERROR] evo not found"; exit 1; }
[[ -f "$GT_PATH" ]] || { echo "[ERROR] GT not found: $GT_PATH"; exit 1; }
[[ -f "$EST_PATH" ]] || { echo "[ERROR] EST not found: $EST_PATH"; exit 1; }
mkdir -p "$OUT_DIR"

evo_ape tum "$GT_PATH" "$EST_PATH" -va --t_max_diff "$T_MAX_DIFF" --save_results "$OUT_DIR/ape.zip"
evo_rpe tum "$GT_PATH" "$EST_PATH" -va --delta "$DELTA" --delta_unit "$DELTA_UNIT" --t_max_diff "$T_MAX_DIFF" --save_results "$OUT_DIR/rpe.zip"

echo "[OK] $OUT_DIR/ape.zip"
echo "[OK] $OUT_DIR/rpe.zip"
