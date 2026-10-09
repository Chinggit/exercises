-- =======================================================
-- Exercise: Top Salaries and Average Ages
-- Description: Joins details to find average pay and age 
--              for job titles making $50,000 or more.
-- =======================================================
SELECT 
    a.occupation,
    ROUND(AVG(a.salary), 2) AS average_salary,
    ROUND(AVG(b.age), 1) AS average_age,
    COUNT(a.employee_id) AS total_employees
FROM employee_salary a
JOIN employee_demographics b
    ON a.employee_id = b.employee_id
GROUP BY a.occupation
HAVING AVG(a.salary) >= 50000
ORDER BY average_salary DESC;
