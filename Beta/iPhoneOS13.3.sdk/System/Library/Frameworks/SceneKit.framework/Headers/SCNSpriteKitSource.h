/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNImageSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitSource : SCNImageSource

{
    SKScene *_scene;
}

@property (retain, nonatomic) SKScene *scene;

- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;

@end
