/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXAppLaunchDuetEvent : ATXDuetEvent

{
    NSString *_bundleId;
    long long _appLaunchState;
    NSString *_launchReason;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long appLaunchState;
@property (nonatomic, readonly) NSString *launchReason;

+ (_Bool)_acceptableLaunchReason:(id)arg1;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 launchReason:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
