/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@protocol HMISystemResourceUsageMonitorDelegate;

@protocol HMISystemResourceUsageMonitorProtocol

@property (weak) id <HMISystemResourceUsageMonitorDelegate> delegate;

- (unsigned short)start;
- (unsigned short)getCurrentSystemResourceUsage;

@end
