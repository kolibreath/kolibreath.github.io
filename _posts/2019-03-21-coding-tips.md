---
layout: post
title:  "编程技巧"
date:   2019-03-22 07:00:43 +0800
categories: 二刷leetcode
---

# Coding tips 


- 格式化字符串 实现在字符串前面补充0
String.format("%03d",s)

- 使用Java list 判断

进行判断：
<br>
```
list.getFirst()！= null

可以使用

list.size() != 0
```

进行合理替换

- 不要使用可变长的list 去作为for循环的guard 
<br>
如图

````
 int order[] = new int[stack.size()];
            for (int i = 0; i < order.length ; i++) {
                order[i] = stack.pop();
            }

````


# Java的一个输入输出挂
<br>
```
 public static class Input{
        private BufferedReader reader;
        private StringTokenizer tokenizer;

        public Input(){
            reader = new BufferedReader(new InputStreamReader(System.in));
        }

        boolean hasNext(){
            while(tokenizer == null || !tokenizer.hasMoreElements()){
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    return false;
                }
            }
            return true;
        }

        String next(){
            if(hasNext()){
                return tokenizer.nextToken();
            }else{
                return null;
            }
        }

        int nextInt(){
            return Integer.parseInt(next());
        }

        //使用BigInteger 完成计算
        BigInteger nextBigInteger(){
            return  new BigInteger(next());
        }

        //使用long 完成计算
        long nextLong(){
            return Long.parseLong(next());
        }

    }

    static Input cin = new Input();
    static PrintWriter cout = new PrintWriter(System.out);
```

使用完成之后需要``cout.close()``

# 如何比较Double （保持精度）
如果直接使用== 符号比较的话会出现问题，。因为浮点数在计算机内部存储的表现问题，比如这个例子
``
package doublecomparision;

final public class DoubleComparision 
{
    public static void main(String[] args) 
    {
        double a = 1.000001;
        double b = 0.000001;

        System.out.println("\n"+((a-b)==1.0));
    }
}
``

可以通过Math.abs()来比较 然后增加一个threshold 阈值作为比较精度:

```

Basically you shouldn't do exact comparisons, you should do something like this:

double a = 1.000001;
double b = 0.000001;
double c = a-b;
if (Math.abs(c-1.0) <= 0.000001) {...}
```

这里才去的精度threshold就是0.000001
