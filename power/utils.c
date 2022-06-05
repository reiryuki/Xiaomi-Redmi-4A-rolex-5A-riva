# msm8937 4 CPU Cores & msm8917
# Building /vendor/bin/hw/android.hardware.power-service-qti
# This line have to be no more than 4 CPU cores
const char* scaling_gov_path[4] = {"/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
                                   "/sys/devices/system/cpu/cpu1/cpufreq/scaling_governor",
                                   "/sys/devices/system/cpu/cpu2/cpufreq/scaling_governor",
                                   "/sys/devices/system/cpu/cpu3/cpufreq/scaling_governor"};
