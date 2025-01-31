---
layout: essay
type: essay
title: "Asking Questions in Software Engineering"
# All dates must be YYYY-MM-DD format!
date: 2025-01-30
published: true
labels:
  - Software Engineering
  - Smart Questions
---

<div class="d-flex justify-content-center">
    <img class="img-fluid" src="../img/Smart Question.jpg" style="width: 300px; height: 300px; object-fit: cover;">
</div>



## Intro to Smart Questions 
I believe that communication is one of the most vital skills a software engineer can develop. In a community that relies on teamwork, effective communication determines the quality and speed of assistance that a person receives. I was introduced to Eric Raymond’s essay, How to Ask Questions the Smart Way, which provides guidelines on formulating questions that maximize the chances of receiving high-quality answers. This essay examines two StackOverflow questions one that follows Raymond’s principles and another that does not.
 

## Smart Question
<a href="https://stackoverflow.com/questions/79401708/change-pointer-adress-inside-function-in-c" target="_blank">Change pointer address inside function in C</a>
<br>
This user asks about their program that deletes extra white space from a string. They state, "I wrote this code, which works until I have to change the passed pointer's address to the new string I made in the function. I have read that this it's not possible without making a pointer to a pointer. The problem is, for my assignment, I can't change the argument types."


  
## Why it is a Smart Question
One of the strongest aspects of this question is its clarity. The user states the goal of removing extra spaces from a string while ensuring that a single space remains between words. They also clearly articulate the challenge: they cannot modify the argument types, which prevents them from using a pointer-to-pointer approach. They don't just state that their code does not work, they also explain why they believe their approach is incorrect. Another reason is that the user provides a full code snippet. So this makes it much easier for others to identify potential errors and offer precise feedback. Finally, this question is genuine and reflects a willingness to learn. The user doesn't post an error message and ask for a direct fix, they attempt to debug their code and reason through their issue logically. The mindset to learn is essential for software engineering. In summary, this is a smart question because it is clear, well-structured, and demonstrates effort, understanding, and a willingness to explore multiple solutions. This type of question reflects the best practices of problem-solving in programming.

## Not so Smart Question
<a href="https://stackoverflow.com/questions/79400901/why-does-my-code-allow-login-with-an-incorrect-password" target="_blank"> Why does my code allow login with an incorrect password?</a>
<br>
There isn't too much to go off from this question. The user gives asks the question, "Why does my code allow login with an incorrect password." They then gives the entire code to and hopes that someone will help them fix the problem. There isn't too much depth or precision behind this forum question.

## Why it is a Not Smart Question
There are several factors as to why this question is not smart. The user presents a large block of Python/Tkinter/SQLite code but does not demonstrate any debugging attempts. They don't specify any error messages, unexpected behavior details, or steps they've taken to diagnose the problem. When looking closer at the code, there are several flaws in authentication logic, for example, The search() function improperly compares query results, using if username search == Usernametxt: instead of extracting values from the database query. Finally, the question lacks focus and contains too much code to identify the actual problem. It would be better if the user would isolate the login logic and give only the relevant snippets.

## Final thoughts
In conclusion, asking smart questions is an essential skill in software engineering. Eric Raymond’s essay, How to Ask Questions the Smart Way, is a good framework for understanding the importance of asking and receiving meaningful answers. The comparison between the two StackOverflow questions displays the key factors that distinguish a well-formed question from a poorly framed one. A smart question is clear, concise, and demonstrates effort, while an ineffective question lacks depth, focus, and problem-solving initiative.
 
  


