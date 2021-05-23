/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKFieldNode.h>

@class MISSING_TYPE, SKTexture;

@interface SKVelocityFieldNode : SKFieldNode

{
    SKTexture *_velocityTexture;
}

@property (retain, nonatomic) SKTexture *velocityTexture;
@property (nonatomic) MISSING_TYPE *velocity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initialize;
- (id)_descriptionClassName;

@end
