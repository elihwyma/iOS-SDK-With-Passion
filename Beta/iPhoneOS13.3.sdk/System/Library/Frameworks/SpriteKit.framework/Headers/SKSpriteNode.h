/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class MISSING_TYPE, NSDictionary, NSString, SKLightNode, SKShader, SKTexture, SKWarpGeometry, UIColor;

@interface SKSpriteNode : SKNode

{
    struct SKCSpriteNode *_skcSpriteNode;
    SKLightNode *_light;
    _Bool _shouldRepeatTexture;
}

@property (nonatomic) _Bool shouldRepeatTexture;
@property (nonatomic) struct CGSize repeatTextureSize;
@property (retain, nonatomic) SKTexture *texture;
@property (retain, nonatomic) SKTexture *normalTexture;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) struct CGRect centerRect;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;
@property (nonatomic) long long subdivisionLevels;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(_Bool)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithImageNamed:(id)arg1;
- (id)valueForAttributeNamed:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;
- (id)initWithTexture:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)scaleToSize:(struct CGSize)arg1;
- (_Bool)repeatTexture;
- (void)setRepeatTexture:(_Bool)arg1;
- (_Bool)_pathFromTextureToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2 accuracy:(float)arg3;

@end
