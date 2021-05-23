/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNUNNotificationIconMapper;

@interface CALNUNNotificationContentMapper : NSObject

{
    CALNUNNotificationIconMapper *_notificationIconMapper;
}

@property (nonatomic, readonly) CALNUNNotificationIconMapper *notificationIconMapper;

+ (void)_setBodyForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setPeopleIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSoundForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSubtitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSummaryArgumentForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setThreadIdentifierForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setTitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setTopicIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setUserInfoForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (id)_sectionIdentifierFromTopicIdentifiers:(id)arg1;
+ (id)_calnNotificationSoundFromUNNotificationContent:(id)arg1;

- (id)initWithNotificationIconMapper:(id)arg1;
- (id)unNotificationContentFromCALNNotificationContent:(id)arg1;
- (id)_unNotificationIconFromCALNNotificationContent:(id)arg1;
- (id)_iconIdentifierFromUNNotificationContent:(id)arg1;
- (id)calnNotificationContentFromUNNotificationContent:(id)arg1;

@end
