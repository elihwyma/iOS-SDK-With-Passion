/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@interface SKOpenGLNode : SKNode

@property struct CGSize viewportSize;

+ (id)openGLNodeWithViewportSize:(struct CGSize)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (void)renderForTime:(double)arg1;
- (_Bool)needsRenderForTime:(double)arg1;
- (void)_renderForTime:(double)arg1;

@end
