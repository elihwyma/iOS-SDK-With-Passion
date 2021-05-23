/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface PUCounterRotatingLayer : CALayer

{
    double _zRotation;
}

@property (nonatomic) double zRotation;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@end
