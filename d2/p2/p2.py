intxt = 'in.txt'
with open(intxt, 'r') as file:
    reports = file.readlines()
safe_count = 0
for report in reports:
    original_nums = [int(x) for x in report.split()]
    nums_list = [original_nums[:i] + original_nums[i+1:] for i in range(len(original_nums))]
    for nums in nums_list:
        increasing = True if nums[1] > nums[0] else False
        prev = nums[0]
        safe = True
        for num in nums[1:]:
            if (increasing and num <= prev) or (not increasing and num >= prev) or (abs(num - prev) > 3):
                safe = False
                break
            prev = num
        if safe:
            safe_count += 1
            break
print(safe_count)