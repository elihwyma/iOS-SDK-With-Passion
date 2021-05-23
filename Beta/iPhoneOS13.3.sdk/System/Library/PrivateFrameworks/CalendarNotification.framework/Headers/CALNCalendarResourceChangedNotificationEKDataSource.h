/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNCalendarResourceChangedNotificationEKDataSource : NSObject

{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNInboxNotificationProvider> inboxNotificationProvider;
@property (nonatomic, readonly) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3;
- (id)fetchCalendarResourceChangedNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)arg1;
- (void)clearCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)arg1;
- (id)_notificationInfoFromNotificationReference:(id)arg1;
- (id)_notificationInfoFromNotification:(id)arg1;
- (id)fetchCalendarResourceChangedNotifications;

@end
