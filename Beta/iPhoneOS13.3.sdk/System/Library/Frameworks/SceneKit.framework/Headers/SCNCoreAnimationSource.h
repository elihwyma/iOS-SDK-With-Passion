/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNImageSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNCoreAnimationSource : SCNImageSource

{
    CALayer *_layer;
}

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;

@end
