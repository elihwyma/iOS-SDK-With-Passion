/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

__attribute__((visibility("hidden")))
@interface SKParticleSystemNode : SKNode

{
    struct SKCParticleSystemNode *_skcParticleSystemNode;
}

- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;

@end
