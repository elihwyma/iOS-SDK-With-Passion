/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneRotationTransform : FBSceneTransform

{
    long long _degrees;
    double _radians;
}

@property (nonatomic) long long degrees;
@property (nonatomic) double radians;

- (id)description;
- (void)_updateTransform;
- (id)initWithRadians:(double)arg1;
- (id)initWithDegrees:(long long)arg1;

@end
