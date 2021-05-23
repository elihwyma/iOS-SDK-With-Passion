/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMSampleTag.h>

@interface MXMUtilizationSampleTag : MXMSampleTag

+ (id)machPort;
+ (id)memory;
+ (id)network;
+ (id)CPUCycles;
+ (id)CPUInstructions;
+ (id)CPUTimeUser;
+ (id)CPUTimeSystem;
+ (id)CPUQosDefault;
+ (id)CPUQosMaintenance;
+ (id)CPUQosBackground;
+ (id)CPUQosUtility;
+ (id)CPUQosLegacy;
+ (id)CPUQosUserInitiated;
+ (id)CPUQosUserInteractive;
+ (id)memoryPhysical;
+ (id)memoryPeakPhysicalLifetime;
+ (id)memoryPeakPhysicalInterval;
+ (id)memoryWired;
+ (id)memoryResident;
+ (id)IOReads;
+ (id)IOWrites;
+ (id)IOLogicalWrites;
+ (id)CPUQos;
+ (id)CPUTime;
+ (id)memoryVirtual;
+ (id)networkRecievedBytes;
+ (id)networkSentBytes;
+ (id)networkRecievedPackets;
+ (id)networkSentPackets;
+ (id)CPU;
+ (id)IO;
+ (id)CPUTicksIdle;
+ (id)CPUTicksUser;
+ (id)CPUTicksSystem;
+ (id)CPUTicksNice;
+ (id)CPULoadThread;
+ (id)CPULoadTask;
+ (id)CPUTicks;
+ (id)CPULoad;
+ (id)memoryDirtied;
+ (id)memorySwapped;
+ (id)memoryLeak;

@end
