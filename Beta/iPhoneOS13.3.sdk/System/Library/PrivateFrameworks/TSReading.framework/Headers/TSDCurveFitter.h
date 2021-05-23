/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDCurveFitter : NSObject

{
    double mErrorDistance;
    long long mErrorIterations;
}

@property (nonatomic) double errorDistance;
@property (nonatomic) long long errorIterations;

+ (id)curveFitter;

- (id)init;
- (void)fitCurveToPoints:(id)arg1 bezierCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)fitCurveToPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 bezierCallback:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (id)bezierPathFittingPoints:(id)arg1;
- (id)bezierPathFittingPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;

@end
