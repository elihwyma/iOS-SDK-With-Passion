/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject

+ (id)_centerForBundleId:(id)arg1;
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;

@end
