/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@class FLSpring, MISSING_TYPE;

@interface BKUIPearlSpringInstance : NSObject

{
    FLSpring *springs[3];
    MISSING_TYPE *_value;
    CDStruct_14d5dc5e _matrix;
    CDStruct_14d5dc5e _initialMatrix;
    MISSING_TYPE *_color;
    float _alphaFactor;
    float _alphaDecay;
    float _scale;
    float _scaleDest;
    _Bool _grayscale;
    unsigned long long _axisOrientation;
    unsigned long long _springState;
    MISSING_TYPE *_target;
}

@property unsigned long long axisOrientation;
@property (nonatomic) unsigned long long springState;
@property (nonatomic) MISSING_TYPE *target;
@property (nonatomic) MISSING_TYPE *value;
@property (nonatomic) _Bool grayscale;

- (MISSING_TYPE *)color;
- (void)setParameters:(struct FLSpringParameters)arg1;
- (MISSING_TYPE *)velocity;
- (CDStruct_14d5dc5e)matrix;
- (void)step:(double)arg1;
- (id)initWithInitialRotation:color: /* Error: Ran out of types for this method. */;
- (CDStruct_14d5dc5e)createAxisRotationMatrix: /* Error: Ran out of types for this method. */;

@end
