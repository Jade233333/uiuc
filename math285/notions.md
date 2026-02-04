# MATH 285 notions

## Lecture 2

### Separable Equations

aha. 写了一大段。

As mentioned, I forgot to save a whole banch of shit I just wrote. Fuck it. Never mind. I will briefly go through them one more time.

The first thing I talked about was the limitation of human beings. There are only two types of differential equations we can solve. One type those are integratable and the other type which we have really good guesses with. 

Then a mentioned about that the separable equations is something I learnt in junior year of high school. To be honest, A-level math and further math is pretty hard. We learnt about a lot of hard things just not systematically so that during the time we learnt them we have never realized how important those things are. Separable equations is most simplest differential equations. In further math, we have also learnt about integrating factor when I was literally absent from school. Anyway I will pick it up just like I did about those integrating techniques in CalcII. 

Okay, quick recap done. Moving to today's content, separable equations. The reasone we can solve separable equations is that it is simple enought so that we can separate varialbes. By which I mean, moving all the $x$s to oneside and all the $y$s to the other side. And fortunately we can integrate both side. So here is an example, the last one in class.

$\frac{dP}{dt} = kP(10-P)$

I just realize that solving this one needs partial farction and its is over complicated to solve it here. So Instead, I will leave this one here and use an general example to explain something. 

$\frac{dy}{dt} = f(x) g(t)$

So we separate variables like this.

$\int \frac{dy}{f(y)} = g(t) dt$

You mighy realize a problem here: we could be dividing a zero. That is absolutely correct. In fact, here we assumes that $f(y) \neq 0$ and we need to check for the case when f(y) = 0.

Not that, when f(y) is equal to 0, the rate of change will also be zero. Which means we are not changing and in a stable state. Our physics-backgournd professor gave us the example or equilibium state and put a ball at the bottom of a bowl. I really like the intuition.

One more thing about our previous "overcompliated example", when you solve it, you will ended up with something like this:(C is the arbituary constatn we choose during integral)

$\frac{P}{10-P} = \pm e^C \cdot e^{10kt}$

Because $C$ is arbituary, we can wrote the whole plus minus thing to another arbituary constant $B$. Then you can solve it no problem. Just don't forget our initially ignored case when $f(y)\neq 0$


## Lecutre 3
### Slope Field

Mon Jan 26 11:40:18 PM CST 2026

This is something I haven't thought about but it is indeed interesting. As we talked about before, we can only solve a limit type of differential equations. So this provide us a way to see how the solution looks like without solving it. It is based on the continuity of a differentiable euqation.

## Lecture 4 
Wed Jan 28 15:33:34 CST 2026
### Continuity

About continuity, we have a formal definition for it. That is something concise and interesting which I haven't thought about before.
$\forall a within the range, \lim_{x\rightarrow a} f(x) = f(x)$

### Existence and Uniqueness.

It will be more obvious to tell this with a written function but I will try to describe the process in words to show that I understand.

So we are talking about IVP, which is initial value problem. So we have two restraints. First, $dy/dt = f(y,t)$ then we know I point on the solution like $(0,0)$. 

To **guaranteen** solution existence, we confirm the continuity of $f(y,t)$ about the initial point. By the way, if the provided restraints does not look like $dy/dt$. You have to convert that this way. To guaranteen uniqness, we need to confirm the continuity of $\partial f(y,t)/\partial y$. So you may not know that this is partical derivative which treats other variables as constant when do the derivative. That is probably a CalcIII content which we haven't learnt yet.

## Lecutre 5
Fri Jan 30 17:26:22 CST 2026
### Linear Integrating factor

Last time we talked about how to tell the existence and uniqness of a LDE. This time, we learnt about how to solve the most easy type. So the idea is fairly tricky. This is probably the time we talked about that we have very good guesses.

Put the equation in the following form
$dy/dt + P(t)y = Q(t)$

The intersting thing is that left part looks like a result of product rule. We have one $dy/dt$ term and one $y$ term. So we can multiply both side by the following integrating factor I to make it the result of $d/dx(Iy)$

$e^{\int P(x) dx}$
 
In that case we can solve the DE by integrate LHS of the equation.

## Lecture 6
Tue Feb  3 11:27:25 PM CST 2026

### Exact equations

Basically we talked about two thing today. One is this exact equation, the other is a sub trick when solving linear DE. Exact, weird name isn't it. So it comes from the reverse of chain rule in multivariable calculus. 
$\partial f = \partial f/\partial x * dx + \partial y/\partial x * dy$ 
So for an equation of this form 
$M(x,y)dx+N(x,y)dy=0$ 
could be possibly be the result of derivative of that function f in our previous equation.
To make this happen, we must have $M(x,y)/\partial y=N(x,y)/\partial x$
That is the reason we call it exact and the reason for this is from another rule of multi. 
$\partial^2f/\partial x\partial y = \partial^2f/\partial y\partial x$

### SUB Tricks

Nothing new about this one, it is just a trick. So we have the form $y/t$ and only this inequation, we can sub it with a $v$. Do not that we need chain rule to get $dy/dt$. And also note that sometime it is not obvious, especially those with $\log$

