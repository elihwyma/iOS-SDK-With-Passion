/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationAction.h>

@class NSDictionary, NSString, NSURL;

@protocol NCNotificationActionRunner;

@interface NCMutableNotificationAction : NCNotificationAction

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *launchBundleID;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *behaviorParameters;
@property (retain, nonatomic) id <NCNotificationActionRunner> actionRunner;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic, getter=isDestructiveAction) _Bool destructiveAction;
@property (nonatomic) _Bool shouldDismissNotification;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
