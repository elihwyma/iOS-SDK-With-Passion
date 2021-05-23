/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKFieldNode.h>

@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initialize;
- (id)_descriptionClassName;

@end
