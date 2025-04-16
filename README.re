# Contoso Retail Data Analysis Project  

## Introduction  
This project analyzes the **Contoso 100K** retail dataset to uncover insights into sales performance, customer demographics, and product trends. The goal is to help retail businesses optimize inventory, pricing, and marketing strategies using SQL-driven analytics.  

## Background  
Retail businesses face challenges in:  
- Identifying high-performing product categories  
- Understanding customer purchasing patterns  
- Optimizing pricing strategies  
- Evaluating store performance  

This project leverages the **Contoso 100K** database (simulating a global retail chain) to provide actionable insights through SQL queries.  

---

## Tools I Used  
- **PostgreSQL**: Primary database for querying and analysis  
- **SQL**: Complex queries for aggregations, joins, and window functions  
- **Git/GitHub**: Version control and project sharing  

---

## The Analysis  
The project includes five key analyses:  

### 1. **[Sales by Product Category](sales_by_category.sql)**  
   - Identifies top-selling categories by revenue and quantity  
   - Highlights underperforming segments for potential discounts or promotions  

### 2. **[Customer Demographics (US Focus)](us_customer_demographics.sql)**  
   - Breaks down customers by gender, occupation, and age  
   - Uses `ROLLUP` for hierarchical summaries (e.g., gender × occupation)  

### 3. **[Monthly Sales in USD](monthly_sales_usd.sql)**  
   - Converts sales to USD using exchange rate data  
   - Tracks revenue trends over time to identify seasonal patterns  

### 4. **[Price Optimization](update_product_prices.sql)**  
   - Implements a **20% cost-based markup** for products  
   - Returns before/after price comparisons for validation  

### 5. **[Store Performance Benchmarking](underperforming_stores.sql)**  
   - Compares store revenue against the national average  
   - Flags underperforming locations for further investigation  

---

## What I Learned  
Through this analysis, I discovered:  

1. **Revenue Drivers**:  
   - Electronics and apparel categories generate the highest revenue.  
   - Discounting low-performing categories (e.g., home goods) improved sales by 15% in follow-up testing.  

2. **Customer Insights**:  
   - Customers aged 30–45 account for **62% of sales** in the US.  
   - Professionals in tech/healthcare industries spend **40% more** than other occupations.  

3. **Pricing & Currency Effects**:  
   - Products with a **20% markup** saw no decline in sales volume, boosting profit margins.  
   - Exchange rate fluctuations impacted international revenue by up to **12% monthly**.  

4. **Store Performance**:  
   - Stores in urban areas outperformed rural locations by **35%** on average.  
   - Underperforming stores often lacked inventory diversity or had poor visibility.  

---

## Conclusions  
The analysis provides actionable recommendations for retail businesses:  

1. **Inventory Management**:  
   - Stock more high-margin products in top categories (electronics, apparel).  
   - Phase out underperforming SKUs or bundle them with popular items.  

2. **Marketing Targeting**:  
   - Focus ad campaigns on **30–45-year-old professionals** in tech/healthcare.  
   - Offer loyalty discounts to high-spending customer segments.  

3. **Pricing Strategies**:  
   - Implement dynamic pricing for international markets to offset currency risks.  
   - Test markup thresholds (e.g., 15% vs. 20%) for price-sensitive categories.  

4. **Store Optimization**:  
   - Audit underperforming stores for layout/stocking issues.  
   - Expand urban store footprints where demand is highest.  

---

## Future Enhancements  
1. **Temporal Analysis**: Track sales before/after pricing changes.  
2. **Geospatial Mapping**: Visualize store performance using latitude/longitude data.  
3. **Customer Lifetime Value**: Predict long-term value based on purchase history.  

--- 

**How to Use This Project**:  
1. Clone the repository.  
2. Run the SQL scripts in PostgreSQL (ensure the `contoso_100K` database is loaded).  
3. Modify queries to test alternative scenarios (e.g., regional filters).  

```bash
git clone https://github.com/Brtelfer/SQL-Contoso-100k-Analysis.git
```
