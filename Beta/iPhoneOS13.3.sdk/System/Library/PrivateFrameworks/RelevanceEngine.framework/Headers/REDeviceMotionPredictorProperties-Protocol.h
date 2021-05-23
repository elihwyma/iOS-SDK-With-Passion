/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class CMMotionActivityManager;

@protocol REDeviceMotionPredictorProperties <Swift>

@property (nonatomic, readonly) CMMotionActivityManager *activityManager;
@property (readonly, getter=isStationary) _Bool stationary;
@property (readonly) unsigned long long motionType;

@end
