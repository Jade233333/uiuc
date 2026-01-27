# MATH 285 notions

## Separable Equations

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

## Slope Field

Mon Jan 26 11:40:18 PM CST 2026

This is something I haven't thought about but it is indeed interesting. As we talked about before, we can only solve a limit type of differential equations. So this provide us a way to see how the solution looks like without solving it. It is based on the continuity of a differentiable euqation.
