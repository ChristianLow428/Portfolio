---
layout: essay
type: essay
title: "How Design Patterns Create Efficiency"
# All dates must be YYYY-MM-DD format!
date: 2025-04-25
published: true
labels:
 - Patterns
 - Software Engineering
---

<div class="d-flex justify-content-center">
    <img class="img-fluid" src="../img/1_iGnDP3sJBudLXohCNuhXlA.png" style="width: 500px; height: 300px; object-fit: cover;"> 
</div>

## Introduction: Patterns in the Code
When I first dipped my toes into coding, everything felt chaotic. Each program was a puzzle I had to solve from scratch. I didn’t realize until much later that professional developers don’t reinvent the wheel every time they write code. They use something called design patterns—tried-and-true templates that solve common programming problems. And once I started using them, coding became a whole lot easier (and way less stressful).

## What Are Design Patterns, Really?
Design patterns are like life hacks for programmers. They aren’t actual code—they’re reusable solutions that can be applied to recurring problems in software design. Think of them like recipes: they don’t tell you what ingredients to use for every meal, but they do give you a structure that works across different situations.

## Island Snow Example
<div class="d-flex justify-content-center">
    <img class="img-fluid" src="../img/Island Snow.png" style="width: 500px; height: 300px; object-fit: cover;"> 
</div>

## Strategy Patterns
In React and Next.js, we break our UI into independent, interchangeable components like TopMenu, MiddleMenu, FooterMenu, etc. This is super similar to the Strategy Pattern—you define a family of interchangeable parts (strategies or components), and you plug them in as needed. If you ever want to swap out the TopMenu for a new version, you just change that one import—no tangled code mess.

## Layout.tsx = Template Method Pattern
Next.js's layout.tsx acts like the Template Method Pattern. It defines the structure of your page (like including headers, footers, and metadata), and you override or inject content (<main>) in child pages like page.tsx. The overall skeleton stays the same, just like in the Template Method pattern.

## Factory Pattern in Component Creation
When you're rendering different components based on props or user interaction, that starts to feel like the Factory Pattern—you encapsulate which component gets created and return it cleanly, rather than using if-else statements all over the place.

## Cleanup
When you removed the boilerplate NavBar and Footer from layout.tsx, you were applying Separation of Concerns—a core software principle that most patterns aim to support. Each component should do one thing well, and deleting unused code avoids coupling things that don’t belong together.

## Why it matters
As a beginner, it’s easy to think “Why bother learning these patterns?” But once projects get even a little complex, design patterns make life so much easier. They help you write code that is modular, maintainable, and scalable—all things I didn’t fully appreciate until I had to go back and fix my own broken code.

Now, if someone asked me in an interview “What are design patterns?” I’d say this: they’re proven solutions to common coding problems that help your code grow without falling apart. And when they ask, “Which ones have you used?” I’d bring up Strategy, Singleton, and Factory—because I’ve seen how they turn chaos into structure.

## A Note About AI Use
This essay was written by me, but I used ChatGPT to help brainstorm, outline ideas, and clean up the wording for clarity and tone. It helped me stay organized and avoid writer’s block while keeping the voice my own. I reviewed everything to make sure it reflects what I’ve actually learned and experienced in class.
  
