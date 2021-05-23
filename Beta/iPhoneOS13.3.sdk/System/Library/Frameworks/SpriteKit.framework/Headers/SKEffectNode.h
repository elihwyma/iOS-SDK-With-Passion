/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class CIFilter, NSDictionary, NSString, SKShader, SKWarpGeometry;

@interface SKEffectNode : SKNode

{
    struct SKCEffectNode *_skcEffectNode;
}

@property (retain, nonatomic) CIFilter *filter;
@property (nonatomic) _Bool shouldCenterFilter;
@property (nonatomic) _Bool shouldEnableEffects;
@property (nonatomic) _Bool shouldRasterize;
@property (nonatomic) long long blendMode;
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

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)valueForAttributeNamed:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;

@end
