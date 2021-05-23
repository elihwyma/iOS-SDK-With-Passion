/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface NTKCubicSpline : NSObject

{
    CDStruct_669ca518 *_processedPoints;
    CDStruct_669ca518 *_controlPoints;
    CDStruct_669ca518 *_workspace;
    CDStruct_9edbfaa9 *_splineMatrix;
    _Bool _closed;
    int _length;
    int _startIndex;
    MISSING_TYPE *_a;
    MISSING_TYPE *_b;
    MISSING_TYPE *_c;
    MISSING_TYPE *_d;
}

- (void)dealloc;
- (int)length;
- (void)process;
- (_Bool)isClosed;
- (CDStruct_669ca518 *)controlPointsBuffer;
- (void)_processSpline;
- (void)_processClosedSpline;
- (void)_processOpenSpline;
- (MISSING_TYPE *)interpolateAt:(float)arg1 derivative:(MISSING_TYPE **)arg2;
- (id)initWithNumberOfControlPoints:(int)arg1 isClosed:(_Bool)arg2;
- (MISSING_TYPE *)interpolateAt:(float)arg1;
- (void)interpolateWithSteps:(int)arg1 interpolation:(CDUnknownBlockType)arg2;
- (void)getControlPoints:(MISSING_TYPE ***)arg1 processedPoints:(MISSING_TYPE ***)arg2;

@end
