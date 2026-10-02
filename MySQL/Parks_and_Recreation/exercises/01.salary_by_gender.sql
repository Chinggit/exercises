-- =======================================================
-- Exercise: Total & Average Salary by Gender
-- Description: Joins demographics and salary tables to 
--              calculate payroll aggregations grouped by gender.
-- =======================================================
SELECT 
    b.gender, 
    ROUND(AVG(a.salary), 2) AS average_salary, 
    SUM(a.salary) AS total_salary
FROM employee_salary a
JOIN employee_demographics b
    ON a.employee_id = b.employee_id
GROUP BY b.gender;
