/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface NTKPrideTouchCrownHandler : NSObject

{
    unsigned long long _touchIndex;
    MISSING_TYPE *_touchCoords[10];
    float _touchTimes[10];
    int _previousCrownIndex;
    double _previousCrownOffset;
    float _strumCurve[15];
    float *_strumAmplitudes;
    float *_strumTargets;
    int _numSplines;
    _Bool _isCyclical;
    float _strumSpeed;
    int _strumPad;
}

- (void)dealloc;
- (void)clearTouches;
- (id)initWithNumSplines:(int)arg1 strumWidth:(float)arg2 strumSpeed:(float)arg3 isCyclical:(_Bool)arg4 padding:(int)arg5;
- (float)strumAmplitudeForSpline:(int)arg1;
- (void)startWaveAtX:(float)arg1 y:(float)arg2 atTime:(double)arg3;
- (void)_generateStrumCurveWithWidth:(float)arg1;
- (void)_strumToCyclicalIndex:(int)arg1 withVelocity:(double)arg2;
- (void)_strumToLinearIndex:(int)arg1 withVelocity:(double)arg2;
- (void)strumToOffset:(double)arg1 withVelocity:(double)arg2;
- (void)setPreviousCrownIndex:(int)arg1;
- (void)iterateTouchesWithBlock:(CDUnknownBlockType)arg1;
- (void)fadeStrumByAmount:(float)arg1;

@end
