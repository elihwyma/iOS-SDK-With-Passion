/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSuggestedEventNotificationDataSource;

@interface CALNSuggestedEventNotificationSource : NSObject

{
    id <CALNSuggestedEventNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
}

@property (nonatomic, readonly) id <CALNSuggestedEventNotificationDataSource> dataSource;
@property (weak, nonatomic, readonly) id <CALNNotificationManager> notificationManager;
@property (nonatomic, readonly) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

+ (id)_bundle;
+ (id)deleteActionIdentifier;
+ (id)defaultSuggestedEventCategoryIdentifier;
+ (id)coalescedSuggestedEventCategoryIdentifier;
+ (id)suggestedEventCanceledCategoryIdentifier;
+ (id)confirmActionIdentifier;
+ (id)ignoreActionIdentifier;

- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3;
- (id)_sourceClientIdentifiersForObjectIDs:(id)arg1;

@end
