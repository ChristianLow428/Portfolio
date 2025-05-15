---
layout: project
type: project
image: img
title: "Manoa Compass"
date: 2025-5-14
published: true
labels:
  - Final Project
  - Manoa Compass

summary: "Manoa Compass, through the SCEN system, provides a scalable solution to student engagement. It helps first-year, transfer, and international students navigate the often-overwhelming array of campus activities by giving them a personalized, curated experience"
---

<div class="d-flex justify-content-center">
    <img class="img-fluid" src="../img/Screenshot 2025-05-14 at 20.19.02.png" style="width: 500px; height: 300px; object-fit: cover;">
</div>

##  Completing the Manoa Compass Project
The Manoa Compass project began as a proposal to help students at the University of Hawai‘i at Mānoa feel more connected to their campus and community. Originally envisioned as a tool for helping out-of-state and international students explore activities around the island, the project evolved into a more focused, actionable solution: the Smart Campus Events Notifier (SCEN). SCEN is a web application that allows students to create personalized profiles and receive automatic notifications about campus events aligned with their interests, using AI to analyze event descriptions and deliver relevant recommendations.
This shift enabled us to build a functioning and impactful solution within the scope of ICS 314, while staying true to the spirit of Manoa Compass—supporting students through connection, engagement, and exploration.

## Agile Workflow and GitHub Collaboration
We developed the project using an Agile methodology. Weekly milestones and user stories were tracked using GitHub Projects. Tasks were broken down into issues, assigned to team members, and completed through branches and pull requests. This structure allowed us to practice professional version control workflows, write clean commits, and collaborate efficiently without conflicts.
Each member of our team contributed to a different part of the system, including user authentication, profile management, the AI event matching engine, and the notification system.

## AI-Based Event Matching System
The core functionality of SCEN is its AI-based matching engine. We collected and parsed data from the UH Mānoa Campus Events Calendar, using basic natural language processing to extract keywords from event titles and descriptions. Users select interest categories when creating their profile (e.g., music, sports, networking, wellness), and the system recommends events that match their preferences.
Although we did not integrate a full machine learning model, our implementation sets the groundwork for future AI enhancements by structuring the data and logic around extensible, tag-based matching.

## Privacy, Ethics, and Accessibility
The ethical design practices from ICS 314 played a major role in our decisions. User data is handled securely through Firebase authentication, and we made sure to only collect essential information. Transparency was key—we clearly informed users what data we use and why.

We also made accessibility a priority by ensuring proper label-input associations, readable font sizes, and keyboard navigation where possible. These steps align with our original goal: creating a welcoming, inclusive experience for all students.

