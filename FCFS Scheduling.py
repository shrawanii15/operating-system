#To apply process scheduling algorithm for calculating CPU utilization time, response time and turnaround time.

process = ["P1", "P2", "P3"]
arrival = [0, 1, 2]
burst = [5, 3, 8]

n = len(process)
time = 0

ct = [0] * n
tat = [0] * n
wt = [0] * n
rt = [0] * n

print("PID\tAT\tBT\tCT\tTAT\tWT\tRT")

for i in range(n):
    if time < arrival[i]:
        time = arrival[i]

    rt[i] = time - arrival[i]   # Response Time
    time += burst[i]
    ct[i] = time               # Completion Time

    tat[i] = ct[i] - arrival[i]
    wt[i] = tat[i] - burst[i]

    print(process[i], "\t", arrival[i], "\t", burst[i], "\t",
          ct[i], "\t", tat[i], "\t", wt[i], "\t", rt[i])

# CPU Utilization
cpu_util = (sum(burst) / time) * 100
print("\nCPU Utilization = {:.2f}%".format(cpu_util))

#Output - 

#PID AT BT CT TAT WT RT
#P1  0  5  5   5   0   0
#P2  1  3  8   7   4   4
#P3  2  8 16  14   6   6
#CPU Utilization = 100.00%
