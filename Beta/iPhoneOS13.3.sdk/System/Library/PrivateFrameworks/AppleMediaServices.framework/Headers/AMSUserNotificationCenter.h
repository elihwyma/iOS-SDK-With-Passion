/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@protocol AMSUserNotificationStrategy;

__attribute__((visibility("hidden")))
@interface AMSUserNotificationCenter : NSObject

{
    id <AMSUserNotificationStrategy> _strategy;
}

@property (nonatomic, readonly) id <AMSUserNotificationStrategy> strategy;

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;

@end
