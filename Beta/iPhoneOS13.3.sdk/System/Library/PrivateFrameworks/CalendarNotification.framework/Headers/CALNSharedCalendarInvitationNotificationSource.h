/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSharedCalendarInvitationNotificationDataSource, CALNSourceEventRepresentationProvider;

@interface CALNSharedCalendarInvitationNotificationSource : NSObject

{
    id <CALNSharedCalendarInvitationNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
    id <CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
}

@property (nonatomic, readonly) id <CALNSharedCalendarInvitationNotificationDataSource> dataSource;
@property (weak, nonatomic, readonly) id <CALNNotificationManager> notificationManager;
@property (nonatomic, readonly) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (nonatomic, readonly) id <CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

+ (id)declineActionIdentifier;
+ (id)reportJunkActionIdentifier;
+ (id)joinActionIdentifier;
+ (id)categoryIdentifierWithoutReportJunk;
+ (id)categoryIdentifierWithReportJunk;

- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4;

@end
