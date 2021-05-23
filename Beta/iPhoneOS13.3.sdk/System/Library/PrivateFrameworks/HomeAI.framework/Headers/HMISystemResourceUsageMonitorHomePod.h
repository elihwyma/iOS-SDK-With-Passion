/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMINotifydObserver, HMISystemResourceUsage, NSObject, NSString;

@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;

@interface HMISystemResourceUsageMonitorHomePod : HMFObject

{
    id <HMISystemResourceUsageMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMISystemResourceUsage *_currentSystemResourceUsage;
    HMINotifydObserver *_notifydObserver;
}

@property (weak) id <HMISystemResourceUsageMonitorDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly) HMINotifydObserver *notifydObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (id)initWithWorkQueue:(id)arg1;
- (id)getCurrentSystemResourceUsage;
- (void)handleSystemLoadChanged:(unsigned long long)arg1;

@end
