/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMINotifydObserver, HMISystemResourceUsage, NSObject, NSString;

@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;

@interface HMISystemResourceUsageMonitoriPad : HMFObject

{
    _Bool _displayOn;
    _Bool _locked;
    id <HMISystemResourceUsageMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMISystemResourceUsage *_currentSystemResourceUsage;
    HMINotifydObserver *_notifydObserverForDisplayState;
    HMINotifydObserver *_notifydObserverForLockState;
}

@property (weak) id <HMISystemResourceUsageMonitorDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly) HMINotifydObserver *notifydObserverForDisplayState;
@property (readonly) HMINotifydObserver *notifydObserverForLockState;
@property (getter=isDisplayOn) _Bool displayOn;
@property (getter=isLocked) _Bool locked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (id)initWithWorkQueue:(id)arg1;
- (id)getCurrentSystemResourceUsage;
- (void)possibleComputeResourceChange;
- (_Bool)computeResourceUsageLevel;
- (void)handleResourceUsageNotification;

@end
