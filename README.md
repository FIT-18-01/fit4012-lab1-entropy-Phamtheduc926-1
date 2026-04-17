[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/sHB0KmgB)
# FIT4012 – Lab 1. Entropy, độ dư thừa thông tin và nghịch đảo modulo

Keywords for checks: entropy, redundancy, modulo, GitHub.


## Mục tiêu bài lab
Sau khi hoàn thành bài này, sinh viên có thể:
- Đọc hiểu và chạy được chương trình tính entropy của một chuỗi ký tự.
- Bổ sung chức năng tính độ dư thừa thông tin dựa trên entropy thực tế.
- Cài đặt hàm tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng.
- Tổ chức, kiểm thử và nộp bài bằng GitHub repo.

## Cấu trúc repo
- `src/entropy_redundancy.cpp`: Q1, Q2
- `src/mod_inverse.cpp`: Q3
- `tests/test_cases.md`: test cases tối thiểu
- `logs/run_log.md`: log chạy chương trình
- `report-1page.md`: báo cáo 1 trang

## Yêu cầu nộp bài
Hoàn thiện repo và nộp link GitHub. Repo cần có:
- `README.md`
- `report-1page.md`
- `tests/` với ít nhất 5 test cases
- `logs/` có kết quả chạy thử
- mã nguồn hoàn thiện cho Q1, Q2, Q3

## Gợi ý commit
- `Complete Q1 entropy walkthrough`
- `Implement redundancy calculation`
- `Implement modular inverse with extended Euclid`
- `Add tests and report`

Cách chạy chương trình
Entropy & Redundancy
g++ src/entropy_redundancy.cpp -o entropy
./entropy
Modulo Inverse
g++ src/mod_inverse.cpp -o mod
./mod
Kết quả mẫu
Input: aaaa → Entropy = 0, Redundancy = 8
Input: abcd → Entropy = 2, Redundancy = 6
Input: hello world → Entropy ≈ 2.845
3 mod 7 → 5
10 mod 17 → 12
6 mod 9 → không tồn tại
Ghi chú

Bài đã được kiểm thử với nhiều test case cơ bản và kết quả phù hợp với lý thuyết.