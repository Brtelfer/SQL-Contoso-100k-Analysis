SELECT 
    COALESCE(country, 'All Countries') AS Country,
    COALESCE(gender, 'All Genders') AS Gender,
    COALESCE(occupation, 'All Occupations') AS Occupation,
    COUNT(*) AS CustomerCount,
    ROUND(AVG(age), 0) AS AverageAge
FROM 
    customer
WHERE 
    countryfull = 'United States'
GROUP BY 
    ROLLUP (country, gender, occupation)
HAVING 
    COUNT(*) > 0;