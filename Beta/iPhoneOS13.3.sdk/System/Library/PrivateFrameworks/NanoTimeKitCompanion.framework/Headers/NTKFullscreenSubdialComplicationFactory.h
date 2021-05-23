/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NSString, NTKFaceView;

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory

{
    NTKFaceView *_faceView;
    struct CGPoint _circularComplicationDistanceFromCenter;
}

@property (nonatomic) struct CGPoint circularComplicationDistanceFromCenter;
@property (weak, nonatomic) NTKFaceView *faceView;
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
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (_Bool)_convertCircularSlot:(id)arg1 toPosition:(long long *)arg2;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (struct CGPoint)_circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect)arg2;

@end
