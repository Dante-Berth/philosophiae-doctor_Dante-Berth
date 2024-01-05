import time
n = pow(10,8)
harmonic_sum = 1
begin_time = time.time()
for i in range(2,n+1):
    harmonic_sum += 1/i
end_time = time.time()
print("Time Process  " + str(round(end_time - begin_time, 3)) + "s")
print(f"Harmonic sum {harmonic_sum} for n equals to {n}")