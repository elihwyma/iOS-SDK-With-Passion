//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALNInboxNotificationMonitor, NSArray;
@protocol CALNNotificationManager, CALNNotificationSource;

@interface CALNNotificationSourceRefresher : NSObject
{
    NSArray<CALNNotificationSource> *_sources;
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;
    id <CALNNotificationManager> _notificationManager;
}

@property(readonly, nonatomic) id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // @synthesize inboxNotificationMonitor=_inboxNotificationMonitor;
@property(readonly, copy, nonatomic) NSArray<CALNNotificationSource> *sources; // @synthesize sources=_sources;
// - (void).cxx_destruct;
- (void)_withdrawExpiredNotificationsForSource:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (void)refreshNotifications;
- (void)handleNotificationsChangedNotification:(id)arg1;
- (id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3;

@end

