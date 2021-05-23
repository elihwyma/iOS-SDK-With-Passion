/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, UIColor;

@interface NTKFaceViewComplicationFactory : NSObject

{
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    double _alpha;
    CLKDevice *_device;
    CDUnknownBlockType _foregroundColorProviderBlock;
    CDUnknownBlockType _platterColorProviderBlock;
    CDUnknownBlockType _alphaProviderBlock;
    double _contentSpecificAnimationDuration;
}

@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) double alpha;
@property (nonatomic) double contentSpecificAnimationDuration;
@property (nonatomic, readonly) CLKDevice *device;
@property (copy, nonatomic) CDUnknownBlockType foregroundColorProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType platterColorProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType alphaProviderBlock;

+ (id)_genericComplicationAnimationWithDuration:(double)arg1 applier:(CDUnknownBlockType)arg2;

- (id)initForDevice:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (id)detachedComplicationDisplaysForFaceView:(id)arg1;
- (double)keylineCornerRadiusForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (_Bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (double)minimumBreathingScaleForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setPlatterColor:(id)arg1 faceView:(id)arg2;

@end
