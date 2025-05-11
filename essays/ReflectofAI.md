---
layout: essay
type: essay
title: "AI: Not a Crutch but a Valuable Tool"
# All dates must be YYYY-MM-DD format!
date: 2025-05-11
published: true
labels:
  - AI
  - Experiences
---

<div class="d-flex justify-content-center">
    <img class="img-fluid" src="../img/ai-graphic-design-vector-art-1024x768.webp" style="width: 500; height: 300px; object-fit: cover;">
</div>

## I. Introduction
Artificial Intelligence (AI) is rapidly transforming the landscape of education, particularly in fields like Software Engineering where automation, optimization, and intelligent assistance can directly influence how students learn and build software. AI tools such as ChatGPT, Claude, and Cursor have become increasingly relevant by offering real-time code suggestions, explanations, and debugging support. In ICS 314, I have made use of ChatGPT and Cursor AI to assist me in understanding programming concepts, generating code snippets, and refining my problem-solving approaches. These tools have complemented the curriculum by enhancing how I interact with code and how I grasp software engineering principles.

## II. Personal Experience with AI


## 1. Experience WODs 
WOD experience involved setting up a Next.js development environment using the nextjs-application-template. I began by going to the GitHub repository and using the “Use this template” feature to create a new private repository named islandsnow-nextjs. For the E45 WOD, Once I had the files locally, I used the terminal to navigate into the project directory and ran npm install to install all necessary third-party libraries. Then, I started the development server using npm run dev. I opened a browser and visited https://localhost:3000 to confirm the application was working correctly. I used AI to clarify instructions from the walkthrough and double-check each terminal command before executing it. For example, I wasn’t initially sure where to run npm install or how to verify whether everything installed correctly, so I asked the AI to explain what to expect from the command output. 

## 2. In-class Practice WODs
During practice WODs, I used Claude AI. One important part of these practice WODs was developing a basic understanding of why we use certain tools, like Bootstrap 5 elements. Cursor could help with the syntax, but I still had to understand what different components like Container, Navbar, Nav.Link, and Dropdown actually do and how they contribute to responsive, consistent UI design. Using Bootstrap 5 in class exercises helped me see how it abstracts away a lot of the styling work, letting me focus on structure and layout without writing all the CSS from scratch.

## 3. In-class WODs
During timed in-class WODs, I still used Cursor AI, but much more sparingly. I wanted to challenge myself to solve problems using my own understanding and logic, especially under time pressure. While AI was available, I made a conscious effort not to depend on it, so that I could accurately evaluate my readiness and knowledge of the concepts. If I used Cursor during these sessions, it was only for quick syntax checks or to confirm my thought process. This approach helped me balance the benefits of AI with the importance of mastering the material on my own.

## 4. Essays
For writing essays, especially the ethical reflection essay, I used ChatGPT to help brainstorm ideas. I prompted it with: “Give me arguments for and against ethical considerations in open-source software.” While the response gave me a broad overview, I had to do more specific research and write the essay myself. ChatGPT helped get past the initial writer’s block but was not useful for detailed course-specific arguments.

## 5. Final Project
While building the final project, I used Cursor AI to help speed up the debugging process For example, Cursor would highlight errors like "too many blank lines," "missing semicolons," or "improper indentation," and automatically suggest changes that conformed to the ESLint rules. In some cases, it even helped restructure my import statements or convert function components to arrow functions if that better fit the project’s style. Although it made the process faster, I still made sure to review each suggested change to understand what was wrong and why the fix worked. This helped reinforce clean coding habits while also teaching me how to recognize and resolve linting issues manually in the future.

## 6. Learning a concept / tutorial
While following a tutorial to clone and set up the nextjs-application-template from GitHub, I encountered a few steps I wasn’t completely confident about—like understanding the difference between cloning a repository versus forking, or how to set up a remote and push to my own repo. I used Cursor AI to clarify these concepts directly in VSCode. For example, when I typed a comment like // How do I push my local code to GitHub?, Cursor suggested the exact Git commands I needed: git remote add origin https://github.com/my-username/islandsnow-nextjs.git and git push -u origin main.

## 7. Answering a question in class or in Discord
I occasionally used AI to fact-check my responses before answering a question. For instance, when someone asked about the purpose of npm run dev, I confirmed my answer by asking ChatGPT for a brief definition. This gave me more confidence that I was sharing accurate information.

## 8. Asking or Answering a Smart Question
One moment where I needed to ask a smart question was while porting components from a React app into a Next.js project. I was unsure whether to use .jsx or .tsx for my component files, especially since the Next.js template was written in TypeScript. I didn’t want to ask a vague question like “Which one should I use?” Instead, I refined my question to: “What are the advantages of using .tsx files in a Next.js project when migrating components originally written in plain React?” Before asking this in class or on Discord, I used Cursor AI to explore the issue further. I typed my question directly in a comment block, and Cursor responded with a concise explanation that .tsx allows for type safety and better developer tooling in TypeScript environments. It also suggested how to gradually convert .jsx to .tsx by adding basic props typing.

## 9. Coding example (e.g., 'give an example of using Underscore .pluck')
When reviewing functional programming, I asked ChatGPT, “Give an example of using underscore.js .pluck with an array of objects.” It generated a working example that demonstrated the core functionality. This was particularly useful for quickly visualizing how a method worked before I used it in a WOD.

## 10. Explaining code
While reviewing past code, I sometimes used ChatGPT to help me understand unfamiliar lines. For example, I input: “What does this line of code mean in JavaScript: items.map(item => item.name)? Help me understand step by step.” The explanation helped my understanding of arrow functions and mapping over arrays.

## 11. Writing code
During front-end development, I focused on creating clean, responsive user interfaces using Bootstrap 5 components. This included structuring navigation menus, layout containers, buttons, and icons in a consistent and visually appealing way. Understanding how Bootstrap’s grid system worked—along with utility classes like d-flex, justify-content-center, and text-light—helped me build interfaces faster and more efficiently. Although the AI made building UI components quicker, I still needed to understand why I was using certain Bootstrap classes, how they interacted with React components, and what changes would impact responsiveness. 

## 12. Documenting code
For my final project, I used ChatGPT to generate clear and consistent JS docstrings for the functions I wrote. This was especially helpful when working in a team, since it made my code easier for others to read and understand. For example, when I created a function to filter users by role, I asked ChatGPT to generate a proper docstring, and it returned a well-formatted explanation of the parameters and return value. This made team collaboration smoother and helped us maintain readable, professional code.

## 13. Quality assurance (e.g., 'What’s wrong with this code  or 'Fix the ESLint errors in 
When dealing with ESLint issues, I pasted snippets into Cursor AI and asked, “Fix the ESLint errors in this code.” It usually worked well for basic formatting problems but sometimes introduced changes that didn’t follow our style guide, so I had to review everything before using it. it was a good lesson that I had to understand what I was fixing before actually giving it to AI.

14. Other uses in ICS 314 not listed
I also used ChatGPT to create visual metaphors or analogies for explaining difficult topics. For example, I asked: “Explain reactive programming using a kitchen analogy.” The response helped me solidify my mental model and even helped peers understand it better when I shared the metaphor.

## III. Impact on Learning and Understanding
AI tools have had a meaningful impact on how I learn. By offering immediate feedback and multiple perspectives on problems, AI enhanced my ability to comprehend challenging topics. However, I also noticed a tendency to rely on AI too early, which sometimes disrupted the deeper learning process. Over time, I learned to balance AI assistance with independent problem-solving. The combination of both improved my coding efficiency, debugging skills, and overall confidence in handling software engineering tasks.

## IV. Practical Applications
One important way I engaged with AI in ICS 314 was by reflecting on its ethical use. I made a conscious effort to use tools like Cursor AI and ChatGPT as learning aids rather than shortcuts. For example, I avoided copy-pasting entire solutions and instead used AI suggestions to understand concepts, debug issues, or improve clarity in my code. This approach helped me stay aligned with the spirit of academic integrity while still benefiting from AI’s support in learning and development.

## V. Challenges and Opportunities
One major challenge with using AI is its unpredictability. Sometimes the solutions were outdated or made assumptions that didn’t match my code context. Another limitation was the temptation to copy solutions instead of fully understanding them. However, AI also presents major opportunities for personalized learning, real-time debugging, and scaffolding for new learners. If integrated correctly into a curriculum, it can enhance both teaching and student outcomes.

## VI. Comparative Analysis
Compared to traditional teaching methods, AI tools offer faster feedback, greater accessibility, and more diverse explanations. However, they lack the personalized mentorship and critical thinking emphasis that in-person instruction provides. AI tools shine when used as supplements—not substitutes—for lectures, peer collaboration, and guided learning. They are especially helpful in reinforcing concepts after class and providing support during solo study without anyone being able to help at the time.

## VII. Future Considerations
In the future, I believe AI will play a larger role in software engineering education. Potential advancements could include AI teaching assistants that monitor student progress and offer personalized practice problems. However, challenges like academic integrity, overreliance, and maintaining deep understanding will need to be addressed. Incorporating AI ethics into the curriculum and teaching students how to use AI responsibly will be essential.

## VIII. Conclusion
Overall, AI has been a powerful companion in my journey through ICS 314. It helped me write, debug, understand, and document code more effectively. While it is not a replacement for human instruction or effort, it offers tremendous potential when used mindfully. I recommend that future courses continue to embrace AI—but with strong guidance to ensure that students remain actively engaged in their learning process.
