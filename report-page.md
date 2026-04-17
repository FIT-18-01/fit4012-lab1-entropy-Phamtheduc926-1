# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
Bài lab nhằm giúp sinh viên hiểu cách tính entropy của chuỗi ký tự, xác định độ dư thừa thông tin (redundancy), và cài đặt thuật toán tìm nghịch đảo modulo bằng Euclid mở rộng.
## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy dựa trên entropy.
- Cài đặt hàm mod_inverse() bằng thuật toán Euclid mở rộng.
- Thực hiện chạy thử với nhiều test case và kiểm tra kết quả.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 8 | Chuỗi lặp hoàn toàn, entropy thấp nhất |
| abcd | 2 | 6 | Các ký tự phân bố đều, entropy cao |
| hello world | 2.84535 | 5.15465 | Phân bố không đều, entropy trung bình |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Nêu ngắn gọn em học được gì từ bài lab, khó khăn lớn nhất là gì, và điều gì giúp em hiểu rõ hơn về entropy hoặc modulo inverse.
Qua bài lab, em hiểu rõ hơn cách entropy phản ánh mức độ phân bố thông tin của dữ liệu và mối liên hệ giữa entropy và độ dư thừa. Em cũng nắm được cách tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng và điều kiện để nghịch đảo tồn tại. Khó khăn lớn nhất là ở bước nhập và chạy chương trình, do cần kết hợp nhiều thao tác như biên dịch, chạy và kiểm tra kết quả. Tuy nhiên, sau khi thực hành nhiều lần, em đã quen hơn với quy trình này và hiểu rõ cách áp dụng vào bài toán.