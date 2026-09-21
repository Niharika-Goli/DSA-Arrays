# Write your MySQL query statement below
select s.name 
from SalesPerson as s left join (orders as o join company as c on c.com_id=o.com_id and c.name="RED")
on s.sales_id=o.sales_id
where c.com_id IS NULL;