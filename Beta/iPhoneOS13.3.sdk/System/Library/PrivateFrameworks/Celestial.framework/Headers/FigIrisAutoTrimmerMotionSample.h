/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject

{
    int _vitalityObjectCount;
    double _timestamp;
    double _deltaPeriod;
    NSDictionary *_inferences;
    NSMutableDictionary *_intermediateCalculations;
    CDStruct_03942939 _gravity;
    CDStruct_1b6d18a9 _originatingFrameTime;
    CDStruct_bf7dff04 _attitude;
    CDStruct_bf7dff04 _delta;
    CDStruct_bf7dff04 _accel;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 originatingFrameTime;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) CDStruct_1b6d18a9 cmTimestamp;
@property (nonatomic, readonly) double deltaPeriod;
@property (nonatomic, readonly) CDStruct_bf7dff04 attitude;
@property (nonatomic, readonly) CDStruct_bf7dff04 delta;
@property (nonatomic, readonly) CDStruct_bf7dff04 accel;
@property (nonatomic, readonly) CDStruct_869f9c67 gravity;
@property (retain, nonatomic) NSDictionary *inferences;
@property (nonatomic) int vitalityObjectCount;
@property (nonatomic, readonly) NSMutableDictionary *intermediateCalculations;

+ (void)initialize;

- (void)dealloc;
- (id)initWithAttitude:(const CDStruct_bf7dff04 *)arg1 gravity:(const CDStruct_869f9c67 *)arg2 motionTimestamp:(double)arg3 frameTimestamp:(CDStruct_1b6d18a9)arg4 previousSample:(id)arg5;
- (CDStruct_bf7dff04)attitudeRelativeTo:(id)arg1;
- (void)prepareIntermediates:(long long)arg1;

@end
