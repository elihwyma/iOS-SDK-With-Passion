/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class NSDictionary, SKShader, SKTexture, UIColor;

@interface SKShapeNode : SKNode

{
    struct SKCShapeNode *_skcShapeNode;
}

@property (nonatomic) double renderQualityRatio;
@property (nonatomic) const struct CGPath *path;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) long long blendMode;
@property (nonatomic, getter=isAntialiased) _Bool antialiased;
@property (nonatomic) double lineWidth;
@property (nonatomic) double glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) double miterLimit;
@property (nonatomic, readonly) double lineLength;
@property (retain, nonatomic) SKTexture *fillTexture;
@property (retain, nonatomic) SKShader *fillShader;
@property (retain, nonatomic) SKTexture *strokeTexture;
@property (retain, nonatomic) SKShader *strokeShader;
@property (copy, nonatomic) NSDictionary *attributeValues;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect)arg1;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithRect:(struct CGRect)arg1;
+ (id)shapeNodeWithRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1 centered:(_Bool)arg2;
+ (id)shapeNodeWithCircleOfRadius:(double)arg1;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint)arg1 B:(struct CGPoint)arg2 C:(struct CGPoint)arg3;
+ (id)shapeNodeWithPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)_initialize;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)valueForAttributeNamed:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;

@end
