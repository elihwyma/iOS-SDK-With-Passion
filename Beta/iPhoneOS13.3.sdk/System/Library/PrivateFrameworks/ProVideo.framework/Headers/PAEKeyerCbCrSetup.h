/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSMutableArray, NSNumber;

@interface PAEKeyerCbCrSetup : NSObject <Swift>

{
    NSNumber *_tolPieX[5];
    NSNumber *_tolPieY[5];
    NSNumber *_softPieX[5];
    NSNumber *_softPieY[5];
    NSMutableArray *_splineVertex;
    struct OMSpline *_keyer2DSatSpline;
    struct PAEKeyerPie *_keyer2DTolPie;
    struct PAEKeyerPie *_keyer2DSoftPie;
    _Bool _initialized;
}

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (void)setTolPieX:(id)arg1 indice:(int)arg2;
- (void)setTolPieY:(id)arg1 indice:(int)arg2;
- (void)setSoftPieX:(id)arg1 indice:(int)arg2;
- (void)setSoftPieY:(id)arg1 indice:(int)arg2;
- (struct Vec2f)polarToCartesian:(struct Vec2f)arg1;
- (void)interpVec2f:(float)arg1 left:(struct Vec2f)arg2 right:(struct Vec2f)arg3 interpolated:(struct Vec2f *)arg4;
- (void)toPolar:(const struct Vec2f *)arg1 polar:(struct Vec2f *)arg2;
- (void)pieToPolarForPie:(struct PAEKeyerPie *)arg1 polar:(struct Vec2f *)arg2;
- (void)pieToPolarForPie:(struct PAEKeyerPie *)arg1 softPie:(struct PAEKeyerPie *)arg2 tolPolar:(struct Vec2f *)arg3 softPolar:(struct Vec2f *)arg4;
- (void)offsetPie:(struct Vec2f *)arg1 offsetDegrees:(float)arg2;
- (void)interpPieWithWeight:(float)arg1 currentDirectionCorrection:(float)arg2 nextDirectionCorrection:(float)arg3 interpolatedCenter:(struct Vec2f)arg4 currentCenter:(struct Vec2f)arg5 currentPolar:(const struct Vec2f *)arg6 nextCenter:(struct Vec2f)arg7 nextPolar:(const struct Vec2f *)arg8 interpolationType:(int)arg9 interpolatedPie:(struct PAEKeyerPie *)arg10;
- (struct OMSpline *)getKeyer2DSatSpline;
- (struct PAEKeyerPie *)getKeyer2DTolPie;
- (struct PAEKeyerPie *)getKeyer2DSoftPie;

@end
