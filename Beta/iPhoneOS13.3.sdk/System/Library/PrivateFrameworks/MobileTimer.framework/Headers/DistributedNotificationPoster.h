/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@interface DistributedNotificationPoster : NSObject

+ (void)postNotificationForUserPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;
+ (void)postNotificationForAlarmsEdited;
+ (void)postNotificationForAlarmActiveChanged;

@end
