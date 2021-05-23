/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SPNetworkMonitor;

@protocol OS_dispatch_queue, SPMonitorsWrapperDelegate;

__attribute__((visibility("hidden")))
@interface SPMonitorsWrapper : NSObject

{
    _Bool _isRunning;
    id <SPMonitorsWrapperDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SPNetworkMonitor *_networkMonitor;
    NSDate *_lastStateChangeDate;
    NSDate *_nextStateChangeDate;
}

@property (weak, nonatomic) id <SPMonitorsWrapperDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) SPNetworkMonitor *networkMonitor;
@property (retain, nonatomic) NSDate *lastStateChangeDate;
@property (retain, nonatomic) NSDate *nextStateChangeDate;
@property _Bool isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (_Bool)isNetworkUp;
- (unsigned long long)powerState;
- (id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2;

@end
