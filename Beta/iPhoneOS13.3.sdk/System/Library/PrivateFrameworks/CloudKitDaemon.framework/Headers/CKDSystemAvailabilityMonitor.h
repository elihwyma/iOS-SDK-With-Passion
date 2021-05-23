/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CKDSystemAvailabilityMonitor : NSObject

{
    unsigned long long _availabilityState;
    NSMutableSet *_watcherWrappers;
    NSObject<OS_dispatch_queue> *_availabilityQueue;
}

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *availabilityQueue;
@property unsigned long long availabilityState;
@property (readonly) _Bool systemIsAvailable;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)registerWatcher:(id)arg1;
- (void)unregisterWatcher:(id)arg1;
- (_Bool)_systemMayNowBeReady;
- (void)_notifyWatchersOfStateChange;

@end
