#!/usr/bin/env bash
set -euo pipefail

MODEL="yolov8n-seg.pt"
OUT_DIR="/home/user/workspace/results/metrics/yolo_coco"

while [[ $# -gt 0 ]]; do
  case "$1" in
    --model) MODEL="$2"; shift 2 ;;
    --out) OUT_DIR="$2"; shift 2 ;;
    *) echo "[ERROR] Unknown argument: $1"; exit 1 ;;
  esac
done

command -v yolo >/dev/null 2>&1 || { echo "[ERROR] yolo CLI not found"; exit 1; }
mkdir -p "$OUT_DIR"

yolo segment val \
  model="$MODEL" \
  data=coco8-seg.yaml \
  project="$OUT_DIR" \
  name=mini \
  exist_ok=True

echo "[OK] Results: $OUT_DIR/mini"
