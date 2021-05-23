/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject

{
    CMNatalimeterInternal *_internal;
}

@property (nonatomic, readonly) CMNatalimeterInternal *_internal;

+ (id)maxNatalieEntries;
+ (_Bool)setUserProfile:(id)arg1 error:(id *)arg2;
+ (double)briskMinuteMetsThreshold;
+ (double)activeMetsThreshold;
+ (id)userProfile;
+ (id)defaultUserProfile;
+ (_Bool)setUserInfo:(id)arg1 error:(id *)arg2;
+ (_Bool)resetCalibrationDataWithError:(id *)arg1;
+ (_Bool)isNatalimeterAvailable;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3;
+ (double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)_shouldAllowMotionCalibrationPromptsForSession:(long long)arg1;
- (void)setSession:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (unsigned long long)getSupportedMetricsForSession:(long long)arg1;
- (unsigned long long)promptsNeededForSession:(long long)arg1;

@end
