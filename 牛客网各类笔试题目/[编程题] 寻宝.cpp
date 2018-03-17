﻿/*
时间限制：1秒

空间限制：32768K

亮亮解出了卷轴隐藏的秘密，来到了一片沼泽地。
这里有很多空地，而面试直通卡可能埋在任意一块空地中，
好在亮亮发现了一堆木材，他可以将木材铺在两个空地之间的沼泽地上。
因为亮亮不知道面试直通卡具体在哪一块空地中，
所以必须要保证任意一块空地对于亮亮来说是可以抵达的。 
“怎么还有鳄鱼！没办法，看来有些空地不能直接到达了。” 
亮亮虽然没有洁癖，但是沼泽地实在太臭了，所以亮亮不会循环利用木材。
而且木材不能拼接在一起使用，所以亮亮必须要知道在耗费木材最少的情况下，
最长的那根木材至少需要多长。

输入描述:
第一行包含两个整数N(1≤N≤10000),M(1≤M≤1000000)。N表示公有N块空地。
接下来M行，每行包含三个整数P(1≤P≤N),Q(1≤Q≤N),K代表P,Q两个间没有鳄鱼，
需要耗费K的木材。


输出描述:
一个整数，即耗费木材最少的情况下，最长的那根木材长度。

输入例子1:
4 3
1 2 1
2 3 1
3 4 2

输出例子1:
2
*/