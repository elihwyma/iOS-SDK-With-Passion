/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationSound.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCMutableNotificationSound : NCNotificationSound

@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic) unsigned long long soundBehavior;
@property (copy, nonatomic) NSString *ringtoneName;
@property (copy, nonatomic) NSDictionary *vibrationPattern;
@property (nonatomic, getter=isRepeating) _Bool repeats;
@property (nonatomic) double maxDuration;
@property (copy, nonatomic) NSDictionary *controllerAttributes;
@property (copy, nonatomic) NSString *songPath;
@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
