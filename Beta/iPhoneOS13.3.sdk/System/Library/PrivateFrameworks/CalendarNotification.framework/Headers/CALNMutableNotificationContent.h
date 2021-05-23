/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/CALNNotificationContent.h>

@class CALNNotificationSound, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CALNMutableNotificationContent : CALNNotificationContent

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) _Bool shouldHideTime;
@property (copy, nonatomic) NSString *iconIdentifier;
@property (nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) CALNNotificationSound *sound;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end
