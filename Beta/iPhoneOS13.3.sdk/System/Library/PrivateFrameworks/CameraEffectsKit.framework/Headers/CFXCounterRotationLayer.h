/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <QuartzCore/CALayer.h>

@interface CFXCounterRotationLayer : CALayer

{
    double _zRotation;
}

@property (nonatomic) double zRotation;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@end
