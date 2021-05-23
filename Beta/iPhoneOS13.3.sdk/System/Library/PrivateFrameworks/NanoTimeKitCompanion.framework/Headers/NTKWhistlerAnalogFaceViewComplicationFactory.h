/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NSString, NTKFaceView, NTKUtilityComplicationFactory;

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory

{
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _usesNarrowTopSlots;
    NTKFaceView *_faceView;
    double _dialDiameter;
}

@property (weak, nonatomic) NTKFaceView *faceView;
@property (nonatomic) double dialDiameter;
@property (nonatomic) _Bool usesNarrowTopSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initForDevice:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)pickerMaskForSlot:(id)arg1;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (_Bool)_isCornerComplicationForSlot:(id)arg1;
- (id)_cornerKeylineViewForSlot:(id)arg1;
- (_Bool)_isCenterComplicationForSlot:(id)arg1;
- (_Bool)_convertCornerSlot:(id)arg1 toPosition:(long long *)arg2;
- (struct CGPoint)circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect)arg2;
- (_Bool)_convertCircularSlot:(id)arg1 toPosition:(long long *)arg2;
- (id)initWithFaceView:(id)arg1 dialDiameter:(double)arg2 device:(id)arg3;
- (_Bool)isCornerComplicationForSlot:(id)arg1;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;

@end
