/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CALNCalendarIconIdentifierProvider, CALNEventCanceledNotificationDataSource, CALNNotificationManager;

@interface CALNEventCanceledNotificationSource : NSObject

{
    id <CALNEventCanceledNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
}

@property (nonatomic, readonly) id <CALNEventCanceledNotificationDataSource> dataSource;
@property (weak, nonatomic, readonly) id <CALNNotificationManager> notificationManager;
@property (nonatomic, readonly) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

+ (id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id *)arg2 summaryArgument:(id *)arg3;
+ (id)deleteActionIdentifier;

- (id)_categoryIdentifier;
- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3;

@end
