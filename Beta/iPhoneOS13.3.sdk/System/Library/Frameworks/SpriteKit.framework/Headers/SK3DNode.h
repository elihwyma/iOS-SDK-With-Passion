/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class MISSING_TYPE, SCNNode, SCNScene;

@interface SK3DNode : SKNode

{
    struct SKC3DNode *_skc3DNode;
}

@property struct CGSize viewportSize;
@property (retain, nonatomic) SCNScene *scnScene;
@property (nonatomic) double sceneTime;
@property (getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) _Bool autoenablesDefaultLighting;

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithViewportSize:(struct CGSize)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (MISSING_TYPE *)projectPoint: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unprojectPoint: /* Error: Ran out of types for this method. */;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (void)_renderForTime:(double)arg1;
- (void)_scnSceneDidUpdate:(id)arg1;

@end
