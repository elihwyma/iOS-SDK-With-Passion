/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface _UIDirectionalRotationLayer : CALayer

{
    struct CATransform3D _previousTransform;
    _Bool _counterTransformLayer;
    _Bool _inverseTransformLayer;
}

@property (nonatomic, getter=isCounterTransformLayer) _Bool counterTransformLayer;
@property (nonatomic, getter=isInverseTransformLayer) _Bool inverseTransformLayer;

- (void)setTransform:(struct CATransform3D)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@end
