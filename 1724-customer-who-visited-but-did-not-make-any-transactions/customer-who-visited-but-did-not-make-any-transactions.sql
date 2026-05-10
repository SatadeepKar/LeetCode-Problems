SELECT customer_id, COUNT(visit_id) as Count_no_trans
FROM visits
WHERE visit_id NOT IN(
    SELECT visit_id FROM Transactions
)
GROUP BY customer_id