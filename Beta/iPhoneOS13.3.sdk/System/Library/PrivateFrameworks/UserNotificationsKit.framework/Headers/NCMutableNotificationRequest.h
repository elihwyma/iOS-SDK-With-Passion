/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationRequest.h>

@class NCNotificationAction, NCNotificationContent, NCNotificationOptions, NCNotificationSound, NSArray, NSDate, NSDictionary, NSSet, NSString, UNNotification;

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *notificationIdentifier;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSSet *subSectionIdentifiers;
@property (copy, nonatomic) NSString *highestPrioritySubSectionIdentifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (nonatomic, getter=isUniqueThreadIdentifier) _Bool uniqueThreadIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSSet *requestDestinations;
@property (retain, nonatomic) NCNotificationContent *content;
@property (retain, nonatomic) NCNotificationOptions *options;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSSet *settingsSections;
@property (retain, nonatomic) NCNotificationSound *sound;
@property (retain, nonatomic) NCNotificationAction *clearAction;
@property (retain, nonatomic) NCNotificationAction *closeAction;
@property (retain, nonatomic) NCNotificationAction *defaultAction;
@property (retain, nonatomic) NCNotificationAction *silenceAction;
@property (copy, nonatomic) NSDictionary *supplementaryActions;
@property (retain, nonatomic) UNNotification *userNotification;
@property (nonatomic) _Bool isCollapsedNotification;
@property (nonatomic) unsigned long long collapsedNotificationsCount;
@property (copy, nonatomic) NSDictionary *sourceInfo;
@property (nonatomic, getter=isCriticalAlert) _Bool criticalAlert;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
