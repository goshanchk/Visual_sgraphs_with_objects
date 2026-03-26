#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BAG_PATH=""
OUT_BASE="${REPO_ROOT}/results/metrics/object_proxy"
TOPIC="/vs_graphs/object_markers"
MIN_TRACK_FRAMES="5"

while [[ $# -gt 0 ]]; do
  case "$1" in
    --bag) BAG_PATH="$2"; shift 2 ;;
    --out) OUT_BASE="$2"; shift 2 ;;
    --topic) TOPIC="$2"; shift 2 ;;
    --min-track-frames) MIN_TRACK_FRAMES="$2"; shift 2 ;;
    *) echo "[ERROR] Unknown argument: $1"; exit 1 ;;
  esac
done

[[ -n "$BAG_PATH" ]] || { echo "[ERROR] --bag is required"; exit 1; }

python3 "$REPO_ROOT/evaluation/object_proxy_metrics.py" \
  --bag "$BAG_PATH" \
  --topic "$TOPIC" \
  --min-track-frames "$MIN_TRACK_FRAMES" \
  --out-json "$OUT_BASE.json" \
  --out-md "$OUT_BASE.md"
