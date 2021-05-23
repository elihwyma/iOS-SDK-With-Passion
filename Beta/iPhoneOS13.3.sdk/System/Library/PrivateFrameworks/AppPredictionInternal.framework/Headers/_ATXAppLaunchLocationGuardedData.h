/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _ATXAppLaunchLocationGuardedData : NSObject

{
    id waitForUnlockNotificationToken;
    NSDictionary *appLaunchCountMap;
    NSDictionary *appIntentLaunchCountMap;
    NSDictionary *intentLaunchCountMap;
    NSDictionary *appForAllIntentsLaunchCountMap;
    NSDictionary *totalLaunchCountMap;
    NSDictionary *totalIntentLaunchCountMap;
}

- (void)dealloc;

@end
