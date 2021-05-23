/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NSString, NTKUtilityComplicationFactory;

@protocol NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate;

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory

{
    NTKUtilityComplicationFactory *_complicationFactory;
    id <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> _delegate;
}

@property (weak, nonatomic) id <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initForDevice:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (id)curvedMaskForSlot:(id)arg1;
- (id)_utilityComplicationSlots;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (_Bool)slotUsesCurvedText:(long long)arg1;
- (id)_colorComplicationSlots;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)_complicationSlots;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (void)curvedCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;

@end
