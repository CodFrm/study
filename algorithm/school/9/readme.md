```flow
st=>start: 开始
ed=>end: 结束
io=>inputoutput: 输入一个数字n
op=>operation: flag = !(n % 3);
    flag = flag << 1 | !(n % 5);
    flag = flag << 1 | !(n % 7);
cond1=>condition: flag==0
cond2=>condition: flag==7
cond3=>condition: flag==6
cond4=>condition: flag==5
cond5=>condition: flag==3
io1=>inputoutput: 不能被 3、5、7 任一个整除
io2=>inputoutput: 能同时被 3、5、7 整除
io3=>inputoutput: 能同时被 3、5 整除
io4=>inputoutput: 能同时被 3、7 整除
io5=>inputoutput: 能同时被 5、7 整除
io6=>inputoutput: 只能被 3、5、7 中的一个整除

st->io->op->cond1
cond1(yes)->io1->ed
cond1(no)->cond2
cond2(yes)->io2->ed
cond2(no)->cond3
cond3(yes)->io3->ed
cond3(no)->cond4
cond4(yes)->io4->ed
cond4(no)->cond5
cond5(yes)->io5->ed
cond5(no)->io6->ed
```


```flow
st=>start: 开始
ed=>end: 结束
op=>operation: 定义数组和数组长度
cond1=>condition: i小于len
cond2=>condition: n小于len
cond3=>condition: a[n]小于a[i]
cond4=>condition: i小于len
op1=>operation: 交换a[n]和a[i]
io=>inputoutput: 输出数组

st->op(right)->cond1
cond1(yes)->cond2
cond2(yes)->cond3
cond3(yes)->op1(left)->cond2
cond3(no)->cond2
cond2(no)->cond1
cond1(no)->io->ed

```

```flow
st=>start: 开始
ed=>end: 结束
op=>operation: 定义num=0和len，len2
io=>inputoutput: 输出字符串1和字符串2
cond1=>condition: 字符串1长度小于字符串2
cond2=>condition: i小于len
cond3=>condition: s1[i+n]==s2[n]
cond4=>condition: n==len2
io1=>inputoutput: 输出num
op1=>operation: 定义n
op2=>operation: n自增1
op3=>operation: num自增1

st->io->op->cond1
cond1(yes)->io1->ed
cond1(no)->cond2
cond2(yes)->op1->cond3
cond3(yes)->op2(left)->cond3
cond3(no)->cond4
cond4(yes)->op3(right)->cond2
cond2(no,left)->io1

```