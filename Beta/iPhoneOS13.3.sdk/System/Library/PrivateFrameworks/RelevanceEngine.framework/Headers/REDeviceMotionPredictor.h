/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class CMMotionActivity, CMMotionActivityManager, REUpNextScheduler;

@interface REDeviceMotionPredictor : REPredictor

{
    CMMotionActivityManager *_activityManager;
    REUpNextScheduler *_scheduler;
    CMMotionActivity *_lastActivity;
    _Bool _stationary;
    unsigned long long _motionType;
}

@property (getter=isStationary) _Bool stationary;
@property unsigned long long motionType;
@property (nonatomic, readonly) CMMotionActivityManager *activityManager;

+ (id)supportedFeatures;

- (id)_init;
- (void)pause;
- (void)resume;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)_updateWithActivity:(id)arg1;

@end
