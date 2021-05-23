/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXLocationManager, ATXNotificationsContentAnalyzer, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, _ATXMotionManagerWrapper;

@interface ATXNotificationContextManager : NSObject

{
    _ATXMotionManagerWrapper *_motionmanager;
    ATXLocationManager *_locationmanager;
    ATXNotificationsContentAnalyzer *_contentanalyzer;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
}

+ (id)sharedInstance;
+ (void)appendNotificationHistoryToMetadata:(id)arg1 history:(id)arg2;
+ (void)appendContentFeaturesToMetadata:(id)arg1 features:(id)arg2;
+ (void)appendLocationToMetadata:(id)arg1 locationType:(id)arg2 visits:(unsigned long long)arg3;
+ (void)appendMotionToMetadata:(id)arg1 motion:(id)arg2;

- (id)init;
- (void)appendContextToMetadata:(id)arg1;
- (id)getNotificationHistoryForApp:(id)arg1;

@end
