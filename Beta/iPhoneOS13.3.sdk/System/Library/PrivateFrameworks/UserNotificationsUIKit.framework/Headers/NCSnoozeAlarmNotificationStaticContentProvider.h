/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@class NCNotificationViewController, NSTimer;

@interface NCSnoozeAlarmNotificationStaticContentProvider

{
    NCNotificationViewController *_viewController;
    double _fireTime;
    NSTimer *_tickTimer;
}

@property (nonatomic) double fireTime;
@property (retain, nonatomic) NSTimer *tickTimer;
@property (retain, nonatomic) NCNotificationViewController *viewController;

- (void)dealloc;
- (id)title;
- (void)invalidateTimer;
- (id)secondaryText;
- (void)_tickTimerFired:(id)arg1;
- (id)_formatDuration:(double)arg1;
- (id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2;

@end
