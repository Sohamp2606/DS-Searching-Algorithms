# Searching Algorithms

## Linear Search
<p>
Linear search is a simple searching algorithm that sequentially checks each element in a list or array until a match is found or the entire list is searched.<br>
It's also known as a sequential search.<br>

  <h3> Time Complexity : O(n) </h3>

<br>

Here's how the linear search algorithm works.

The following steps are followed to search for an element k = 1 in the list below.

![Screenshot 2023-08-10 192912](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/d67a9978-34b9-441b-ab02-8bf5f8cc065f)

<br>
<p>  1. Start from the first element, compare k with each element Array.</p>
<br>

![Screenshot 2023-08-10 193015](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/e939c4b0-2ea6-4879-bff3-d599a8c92c0b)

<br>
<p>  2. If x == k, the search is successful </p>
<br>

![Screenshot 2023-08-10 194133](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/432eb62b-7df2-4dd1-91b4-8473bbda6aac)
<br>

  3. else element is not found




<br>

## Linear Search

<p>Binary search is a more efficient searching algorithm compared to linear search, especially for sorted lists or arrays. </p> <p>It employs a divide-and-conquer strategy to quickly locate a target element by repeatedly dividing the search interval in half.</p>
  
<h3>Time Complexity : </h3>
  <h3>&#x2022; Best Case Complexity : O(1) </h3>
  <h3>&#x2022; Worst Case Complexity : O(log n) </h3>
  
<br>

</p> <p>Here's how the binary search algorithm works</p>

  1. The array in which searching is to be performed,Let x = 4 be the element to be searched.
  
<br>

![Screenshot 2023-08-10 200039](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/08f745c0-4161-459a-a978-086abafc6b77)

<br>

  2. Set two pointers low and high at the lowest and the highest positions respectively.
  
<br>

![Screenshot 2023-08-10 200236](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/eaabbffa-c22d-4523-b3a1-836cf95d98c0)

<br>

  3. Find the middle element mid of the array ie. arr[(low + high)/2] = 6
  
<br>

![Screenshot 2023-08-10 200529](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/7f6739ca-75bc-4139-a7c3-bffe6a7d993f)

<br>
<p>  4. If x == mid, then return mid.Else, compare the element to be searched with mid.</p>
<p>  5. If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.</p>
<p>  6. Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.</p>
<br>

![Screenshot 2023-08-10 200356](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/b012cddc-3bf0-4753-966b-9075b93147ae)

<br>

  7. Repeat steps 3 to 6 until low meets high
  
<br>

![Screenshot 2023-08-10 200419](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/789f7824-b91e-4c53-8bf0-5ffee4b6eada)

<br>

  8. x = 4 is found
  
<br>

![Screenshot 2023-08-10 200419](https://github.com/Sohamp2606/Searching-Algorithms/assets/106002920/12e8a8fe-3db2-49c0-a9e1-76e7ee7b82f6)



