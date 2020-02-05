## 1.1 JavaScript语言核心

由于JavaScript属于弱类型语言，所以不需要设定数据类型  
var x; 代表声明变量

x = "helllo";和x = 'hello'; 都代表字符串

x = true | false ;都是布尔值

// js对象

var book = {
    topic:"js",  属性topic的值是js
    fat：true   属性fat的值是true
};

// 通过.或者[ ]访问对象属性

book.topic  =>  js  
book["fat"]  =>  true

// 数组，以数字为索引

var primes = [2,3,5,7];  
primes[0]       =>2  
primes.length       =>4  数组元素个数  
primes[4] = 9；  赋值添加新元素  
promes[4] = 11;  赋值，改变已有元素  
var empty = [];     []是空数组，它具有0个元素  
empty.length        => 0

// 数组和对象都可包含另一个数组或对象  
var points = [      // 有两个元素的数组  
    {x: 0, y: 0},       // 每个元素都是一个对象   
    {x: 1, y: 1}
];    
var data = {        // 一个包含两个属性的对象    
    trial1: [[1,2],[3,4]],  // 每一个属性都包含另一个数组  
    trial2: [[2,3],[4,5]]
};

// 运算符  

3 + 2  
3 - 2  
3 * 2  
3 / 2  
points[1].x - points[0].x   //更复杂的操作数也能照常工作  
"3" + "2"   // => "32"， +号可以完成加法运算也可以作字符串连接  

count++;  
count--;  
count += 2;  
count += 4;

x == y  
x != y  
x < y  
x <=y  
x > y  
x >= y  
"two" == "three"  => false两个字符串不相等  
“two” > "three"  => true "tw"在字母中的索引大于"th"  
false == (x > y)  => true：false和false相等  
&&  与运算  
||  或运算  
|   求反  

// 函数是一段带有参数的js代码，可以多次调用  

    function plus1(x){  //定义一个名为plus1的函数，带有参数x
    return x+1;  //返回一个比传入的参数大的值
    }  
    plus1(y)  // =>4:y为3，调用函数的结果为3+1  
    var square = function(x){  // 函数是一种值
    return x*x;  
    };

当将函数和对象写在一起的时候，函数就变成了“方法”（method）  

var a = [];     // 创建一个新数组  
a.push(1,2,3);      // push（）方法向数组添加元素
a.reverse();    // 方法，将数组元素的次序反转  

// 我们也可以定义自己的方法，“this”关键字是对定义方法的对象的引用

JavaScript是一种面向对象的编程语言，但和传统的面向对象又有很打区别，后面详说

// 定义一个构造函数以初始化一个新的point对象

function Point(x,y){    // 按照惯例，构造体函数首字母大写
    this.x = x;     // 关键字this指代初始化的实例  
    this.y = y;     // 将函数的参数存储为对象的属性
}       // 不需要return  

// 使用new关键字和构造体来创建一个实例  
var p = new Point(1,1);     // 平面几何中的点（1，1）  


控制语句依然有 if while for 

## 1.2客户端js

> <script src="library.js"></script>
 引入js库
 
 js区分大小写
 
 后面13章讲让JavaScript在web浏览器中运行起来  
 14章讲web浏览器脚本技术，涵盖一些重要的全局函数  
 15章讲通过脚本操作HTML文档内容  
 16章讲JavaScript操作CSS  
 17章讲如何定义、注册事件处理程序，以及浏览器如何调用  
 19章讲jQuery
 
## 2.1 字符集

2.1.1 区分大小写

JavaScript是一门区分大小写的语言 “online” “ONLINE” “OnLine” “Online” 是4个不同的变量名

需要注意HTML不区分大小写

2.1.2 空格、换行符和控制控制符

JavaScript会忽略程序中标识符之间的空格，所以采用一致的缩进形成统一的风格，可以提高代码可读性

## 2.2注释

JavaScript支持两种方式的注释

// 这是单行注释  
/* 这里是一段注释 */    // 这里是另一段注释  
/*
* 这是一段注释
* 这里的注释可以连续写
*/



## 2.3直接量

直接量就是程序中直接使用的数据值  
12  // 数字  
1.2  // 小数  
"hello world"  // 字符串文本  
'Hi'  // 另一个字符串  
true  // 布尔值  
false  // 另一个布尔值  
/javascript/gi  // 正则表达式直接量（用做模式匹配）  
null  // 空  

## 2.4标识符和保留字

标识符就是一个名字

保留字就是JavaScript把一些标识符拿出来作为自己的关键字，比如function,return等等  

## 2.5可选的分号

如果一行只有一句话，可以不用分号，通常不省略  

var a  
a  
=  
3  
consolse.log(a)  

JavaScript会将其解析为  

var a; a = 3; console.log(a);

"++" 和 "--" 运算符既可以作为前缀也可以作为后缀，如果没有分号，会默认解析为前缀运算符  

x  
++  
y  

解析为 “x;++y” 而不是 “x++;y”


 