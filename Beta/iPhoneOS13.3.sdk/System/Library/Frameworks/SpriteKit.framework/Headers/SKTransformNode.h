/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class MISSING_TYPE;

@interface SKTransformNode : SKNode

{
    struct SKCTransformNode *_skcTransformLayer;
    MISSING_TYPE *_euler;
}

@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (struct)quaternion;
- (void)setQuaternion:(struct)arg1;
- (CDStruct_8e0628e6)rotationMatrix;
- (MISSING_TYPE *)eulerAngles;
- (void)setEulerAngles: /* Error: Ran out of types for this method. */;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (double)zRotation;
- (void)setZRotation:(double)arg1;
- (void)setRotationMatrix:(CDStruct_8e0628e6)arg1;

@end
