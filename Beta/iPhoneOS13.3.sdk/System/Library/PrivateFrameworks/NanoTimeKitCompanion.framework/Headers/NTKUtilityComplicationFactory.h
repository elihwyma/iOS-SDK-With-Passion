/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKFont, NSString, NTKFaceView;

@protocol NTKUtilityComplicationFactoryDelegate, NTKUtilityFlatComplicationViewDelegate;

@interface NTKUtilityComplicationFactory : NSObject

{
    _Bool _accommodatesTwoTopComplications;
    CLKDevice *_device;
    id <NTKUtilityComplicationFactoryDelegate> _delegate;
    double _normalSidePadding;
    double _normalVerticalPadding;
    double _deselectedKeylineSideInnerPadding;
    double _deselectedKeylineVerticalInnerPadding;
    double _deselectedKeylineCircularInnerPadding;
    double _selectedKeylineSideInnerPadding;
    double _selectedKeylineVerticalInnerContentSpacer;
    double _selectedKeylineHeight;
    double _foregroundAlpha;
    double _foregroundImageAlpha;
    double _maxNormalLongWidth;
    double _crownIndicatorGap;
    CLKFont *_topBezelLabelFont;
    double _bezelLabelMaxWidthInDegree;
    double _bezelLabelTopPadding;
    double _bezelKeylineInnerCircleOffset;
    double _dialDiameter;
    NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *_faceView;
    double _dateKeylineMaxWidth;
    double _dateHorizontalCenterOffset;
    double _dateVerticalCenterOffset;
    long long _bottomCenterLayout;
    struct CGSize _normalCircularPadding;
    struct UIEdgeInsets _screenEdgeInsets;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (weak, nonatomic) id <NTKUtilityComplicationFactoryDelegate> delegate;
@property (nonatomic) _Bool accommodatesTwoTopComplications;
@property (nonatomic) double normalSidePadding;
@property (nonatomic) double normalVerticalPadding;
@property (nonatomic) struct CGSize normalCircularPadding;
@property (nonatomic) double deselectedKeylineSideInnerPadding;
@property (nonatomic) double deselectedKeylineVerticalInnerPadding;
@property (nonatomic) double deselectedKeylineCircularInnerPadding;
@property (nonatomic) double selectedKeylineSideInnerPadding;
@property (nonatomic) double selectedKeylineVerticalInnerContentSpacer;
@property (nonatomic) double selectedKeylineHeight;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) double maxNormalLongWidth;
@property (nonatomic) struct UIEdgeInsets screenEdgeInsets;
@property (nonatomic) double crownIndicatorGap;
@property (retain, nonatomic) CLKFont *topBezelLabelFont;
@property (nonatomic) double bezelLabelMaxWidthInDegree;
@property (nonatomic) double bezelLabelTopPadding;
@property (nonatomic) double bezelKeylineInnerCircleOffset;
@property (nonatomic) double dialDiameter;
@property (weak, nonatomic) NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *faceView;
@property (nonatomic) double dateKeylineMaxWidth;
@property (nonatomic) double dateHorizontalCenterOffset;
@property (nonatomic) double dateVerticalCenterOffset;
@property (nonatomic) long long bottomCenterLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)placementForSlot:(long long)arg1;
+ (void)curvedCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(long long)arg6 forDevice:(id)arg7;

- (id)initForDevice:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (id)pickerMaskForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)slotSupportsCurvedText:(id)arg1;
- (id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3;
- (void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(struct CGRect)arg3;
- (unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)foregroundAlphaForEditing:(_Bool)arg1;
- (double)foregroundImageAlphaForEditing:(_Bool)arg1;
- (double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)keylineCornerRadiusForSlot:(long long)arg1;
- (void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 bounds:(struct CGRect)arg3 dialDiameter:(double)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 dialDiameter:(double)arg3;
- (long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2;
- (id)keylineViewForSlot:(long long)arg1 dialDiameter:(double)arg2;
- (double)bezelComplicationRadiusWithDialDiameter:(double)arg1;
- (double)bezelComplicationMaxAngularWidth;
- (id)curvedMaskForSlot:(long long)arg1;
- (id)keylineViewForSlot:(long long)arg1;
- (id)_viewForDateComplication:(id)arg1;
- (void)_configureTopLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureBottomLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureBottomRightLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureTopBezelLayout:(id)arg1 withBounds:(struct CGRect)arg2 dialDiameter:(double)arg3;
- (void)_configureBottomCenterLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureTopRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightLongLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureDateLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureUpNextTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (id)_curvedImageForSlot:(long long)arg1 filled:(_Bool)arg2;
- (id)_curvedKeylineImageForSlot:(long long)arg1;
- (id)_curvedMaskImageForSlot:(long long)arg1;
- (double)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (void)_configureLayout:(id)arg1 withNormalSize:(struct CGSize)arg2 editingSize:(struct CGSize)arg3 variant:(_Bool)arg4 addCircleOverrides:(_Bool)arg5 makeRuleBlock:(CDUnknownBlockType)arg6;
- (double)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxDateWidthLeavingRoomForKeylines;
- (double)_maxWidthForKeylineAndPadding;
- (double)maxDateWidthLeavingRoomForKeylines;

@end
