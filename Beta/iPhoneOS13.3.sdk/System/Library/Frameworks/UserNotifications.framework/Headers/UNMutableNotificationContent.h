/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationContent.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, UNNotificationIcon, UNNotificationSound;

@interface UNMutableNotificationContent : UNNotificationContent

@property (copy, nonatomic) NSString *header;
@property (nonatomic) _Bool shouldIgnoreDoNotDisturb;
@property (nonatomic) _Bool shouldIgnoreDowntime;
@property (nonatomic) _Bool shouldSuppressScreenLightUp;
@property (nonatomic) _Bool shouldHideDate;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool shouldAuthenticateDefaultAction;
@property (nonatomic) _Bool shouldBackgroundDefaultAction;
@property (nonatomic) _Bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) _Bool shouldSuppressDefaultAction;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (copy, nonatomic) UNNotificationIcon *icon;
@property (copy, nonatomic) NSSet *topicIdentifiers;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) _Bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic) NSString *accessoryImageName;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (nonatomic) _Bool shouldPreemptPresentedNotification;
@property (nonatomic) _Bool shouldPreemptSTAR;
@property (nonatomic) _Bool shouldHideTime;
@property (nonatomic) _Bool hasDefaultAction;
@property (copy, nonatomic) NSString *defaultActionTitle;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSNumber *badge;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *launchImageName;
@property (copy, nonatomic) UNNotificationSound *sound;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (copy, nonatomic) NSString *targetContentIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
