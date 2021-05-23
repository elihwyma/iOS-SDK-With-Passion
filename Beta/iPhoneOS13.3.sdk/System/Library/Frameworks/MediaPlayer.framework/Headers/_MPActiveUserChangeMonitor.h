/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@protocol OS_dispatch_source, _MPActiveUserChangeMonitorDelegate;

@interface _MPActiveUserChangeMonitor : NSObject

{
    struct os_unfair_lock_s _stateLock;
    NSSet *_expectedNotifications;
    NSMutableSet *_receivedNotifications;
    NSObject<OS_dispatch_source> *_notificationTimer;
    id <_MPActiveUserChangeMonitorDelegate> _delegate;
}

@property (nonatomic, readonly) NSSet *expectedNotifications;
@property (copy, nonatomic) NSMutableSet *receivedNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notificationTimer;
@property (nonatomic, readonly) struct os_unfair_lock_s stateLock;
@property (weak, nonatomic) id <_MPActiveUserChangeMonitorDelegate> delegate;

- (id)initWithDelegate:(id)arg1;
- (void)ingestNotificationName:(id)arg1;
- (void)_startNotificationTimerWithEventHandler:(CDUnknownBlockType)arg1;
- (void)_cancelNotificationTimerWithReason:(id)arg1;

@end
