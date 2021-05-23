/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode

{
    struct SKCLightNode *_skcLightNode;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *ambientColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double falloff;
@property (nonatomic) unsigned int categoryBitMask;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)setLightCategoryBitMask:(unsigned int)arg1;
- (void)setLightDecay:(double)arg1;
- (double)lightDecay;
- (unsigned int)lightCategoryBitMask;

@end
