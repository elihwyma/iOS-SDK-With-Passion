/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDistributedNotificationObserver : NSObject

{
    NSString *_notificationName;
    long long _notificationType;
    _Bool _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _notificationHandler;
    CDUnknownBlockType _timeoutHandler;
}

@property (copy) CDUnknownBlockType notificationHandler;
@property (copy) CDUnknownBlockType timeoutHandler;

- (id)init;
- (void)_stopObserving;
- (void)waitWithTimeout:(double)arg1;
- (void)_startObserving;
- (id)initWithNotificationName:(id)arg1;
- (id)initWithNotificationName:(id)arg1 type:(long long)arg2;
- (void)_scheduleTimeoutTimerWithTimeout:(double)arg1;
- (void)_didReceiveNotification:(id)arg1;
- (void)_invalidateTimeoutTimer;
- (void)_didTimeOut;
- (void)stopWaiting;

@end
