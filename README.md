# 🔍 Learn Reverse Engineering with IDA Pro & Radare2

# Name : Hanzel Putra Wollwage
Hi! I'm currently learning reverse engineering, and this repo is my personal documentation and practice lab. I'm using tools like **IDA Pro** and **Radare2** to understand how compiled programs work under the hood.

This repository includes notes, experiments, and small reverse engineering challenges I try to solve as I improve my skills.

---

## 📚 Table of Contents

- [Introduction](#introduction)
- [Tools I'm Using](#tools-im-using)
- [Beginner Workflow](#beginner-workflow)
- [IDA Pro Guide](#ida-pro-guide)
- [Radare2 Guide](#radare2-guide)
- [Sample Challenges](#sample-challenges)
- [Cheat Sheets](#cheat-sheets)
- [Resources](#resources)

---

## 🧠 Introduction

Reverse engineering is the art of analyzing software to figure out how it works without seeing the source code. It’s used in cybersecurity, malware analysis, vulnerability discovery, and even CTFs.

This repo is **not a professional guide**, but a place to track what I learn as I practice and break down binaries step by step.

---

## 🛠 Tools I'm Using

| Tool     | Description |
|----------|-------------|
| [IDA Pro](https://hex-rays.com) | Industry-standard disassembler & decompiler. I'm using the Free version. |
| [Radare2](https://rada.re/n/) | Free and open-source CLI reverse engineering toolkit. |
| [Cutter](https://cutter.re) | GUI frontend for Radare2 (optional). |

---

## 🧠 Language

- C
- C++
- Assembly x86
- Assembly ARM (Smartphone Processor)
- Assembly Z80 (Micro Processor)

---

## 🧰 Beginner Workflow

As a learner, here's my current workflow for analyzing binaries:

1. **Open the binary** in IDA or Radare2.
2. **Identify entry point and strings** (e.g., using `.text`, `.data`, and `.rodata`).
3. **Trace functions, loops, and conditional jumps**.
4. **Understand what the program expects (like password or flag checks)**.
5. **Rebuild logic manually or patch binary if needed**.

---

## 🧩 IDA Pro Guide

### How I Start:
- Open binary via `File > Open`.
- Let it auto-analyze.
- Use **Pseudocode View (F5)** to read C-like output.

### Tips I'm Learning:
- `G` to go to address.
- `X` to show cross-references.
- Rename functions (`N`) and variables for clarity.
- Add comments with `;`.

---

## ⚙️ Radare2 Guide

### Launch & Analysis:
```bash
r2 -A ./your_binary
