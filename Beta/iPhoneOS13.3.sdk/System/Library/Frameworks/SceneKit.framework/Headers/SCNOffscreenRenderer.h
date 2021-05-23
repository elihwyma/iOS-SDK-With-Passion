/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic, readonly) unsigned int textureID;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize size;

+ (id)offscreenRendererWithDevice:(id)arg1 size:(struct CGSize)arg2;
+ (id)offscreenRendererWithContext:(id)arg1 size:(struct CGSize)arg2;

- (id)snapshot;

@end
