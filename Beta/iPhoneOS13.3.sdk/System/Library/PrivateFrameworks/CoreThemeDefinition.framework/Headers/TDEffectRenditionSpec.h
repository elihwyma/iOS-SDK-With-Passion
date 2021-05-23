/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSNumber *effectScale;
@property (retain, nonatomic) NSOrderedSet *components;
@property (retain, nonatomic, readonly) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (retain, nonatomic, readonly) TDEffectComponent *CUIShapeEffectOutputOpacity;

+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;

- (id)effectPreset;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;
- (id)componentOfType:(unsigned int)arg1;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2;

@end
