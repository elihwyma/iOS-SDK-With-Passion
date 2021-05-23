/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthStoreClient, HKWorkoutConfiguration, NSString, NSUUID;

@interface HDWorkoutSessionConfiguration : NSObject

{
    _Bool _requiresCoreLocationAssertion;
    _Bool _supportsAppRelaunchForRecovery;
    NSUUID *_sessionIdentifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    HDHealthStoreClient *_client;
    NSString *_clientProcessBundleIdentifier;
    NSString *_clientApplicationIdentifier;
}

@property (copy, nonatomic, readonly) NSUUID *sessionIdentifier;
@property (copy, nonatomic, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (copy, nonatomic, readonly) NSString *clientProcessBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *clientApplicationIdentifier;
@property (nonatomic, readonly) _Bool requiresCoreLocationAssertion;
@property (nonatomic, readonly) _Bool supportsAppRelaunchForRecovery;

- (id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3 processBundleIdentifier:(id)arg4 applicationIdentifier:(id)arg5 requiresCoreLocationAssertion:(_Bool)arg6 supportsAppRelaunchForRecovery:(_Bool)arg7;

@end
