# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 隨機化快速排序（Randomized Quick Sort）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
隨機化快速排序（Randomized Quick Sort）是快速排序的一種變體，<br>
它在選擇基準點時使用隨機選取的方式，以減少對特定輸入的敏感性，提高性能。<br>
<br>
隨機化快速排序的過程如下：<br>
- 選擇基準點：從數列中隨機選擇一個基準點。這個基準點將用於劃分數列。
- 分區：
  - 使用快速排序的Lomuto分區或Hoare分區方案將數列劃分為兩個子數列。
  - 遍歷數列，將小於基準點的元素放在左側，大於基準點的元素放在右側。
- 遞迴應用：
  - 對劃分後的兩個子數列遞迴應用隨機化快速排序。
  - 這表示分別對左側子數列和右側子數列進行隨機化快速排序，直到子數列的大小為0或1。
- 合併結果：
  - 將排序後的左側子數列、基準點和右側子數列合併為最終排序結果。

<br>

隨機化快速排序的時間複雜度：<br>
- 平均情況下的時間複雜度為 O(nlogn)。
- 最壞情況下的時間複雜度為 O(n^2)，但由於基準點的隨機性，發生最壞情況的概率極低。
- 最好情況下的時間複雜度為 O(nlogn)。
- 空間複雜度為 O(logn)（遞迴調用所需的堆疊空間）。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-quick-sort-randomized/blob/main/C%2B%2B/main.cpp) - Randomized Quick Sort (C++)

---

## 參考資料
* [RUNOOB - 随机化快速排序](https://www.runoob.com/data-structures/random-quick-sort.html) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
