/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NSArray, NTKUtilityComplicationFactory, UIColor;

@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory

{
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _usesLegibility;
    NSArray *_supportedComplicationSlots;
    CDUnknownBlockType _shadowColorProviderBlock;
    CDUnknownBlockType _timeTravelYAdjustmentProviderBlock;
    UIColor *_shadowColor;
}

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) NSArray *supportedComplicationSlots;
@property (copy, nonatomic) CDUnknownBlockType shadowColorProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType timeTravelYAdjustmentProviderBlock;

- (id)initForDevice:(id)arg1;
- (double)_timeTravelYAdjustment;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (_Bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (long long)_photosUtilitySlotForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 attributes:(unsigned long long)arg3 faceView:(id)arg4;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setShadowColor:(id)arg1 faceView:(id)arg2;
- (void)setUsesLegibility:(_Bool)arg1 faceView:(id)arg2;

@end
