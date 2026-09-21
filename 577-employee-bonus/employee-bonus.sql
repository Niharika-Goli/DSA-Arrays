# Write your MySQL query statement below
SELECT Employee.name , Bonus.bonus
FROM Employee LEFT JOIN Bonus ON Employee.empId=Bonus.empId
WHERE Bonus IS NULL OR Bonus<1000;