/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@interface AVTMorpherWeightRemappingDescriptor : NSObject

{
    float _ax;
    float _bx;
    float _cx;
    float _ay;
    float _by;
    float _cy;
}

@property (nonatomic) float ax;
@property (nonatomic) float bx;
@property (nonatomic) float cx;
@property (nonatomic) float ay;
@property (nonatomic) float by;
@property (nonatomic) float cy;

- (float)solveCurveX:(float)arg1;
- (float)sampleCurveY:(float)arg1;
- (float)sampleCurveX:(float)arg1;
- (float)sampleCurveDerivativeX:(float)arg1;
- (float)solveFor:(float)arg1;

@end
