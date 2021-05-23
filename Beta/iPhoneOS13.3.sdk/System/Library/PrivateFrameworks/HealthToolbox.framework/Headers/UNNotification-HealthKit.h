/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UserNotifications/UNNotification.h>

@class NSDictionary, NSURL;

@interface UNNotification (HealthKit)

@property (nonatomic, readonly) long long wd_domain;
@property (copy, nonatomic, readonly) NSURL *wd_url;
@property (copy, nonatomic, readonly) NSDictionary *wd_userInfo;

@end
