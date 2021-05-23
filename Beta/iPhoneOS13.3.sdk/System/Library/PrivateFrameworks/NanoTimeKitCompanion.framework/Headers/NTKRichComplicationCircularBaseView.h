/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIView;

@interface NTKRichComplicationCircularBaseView : NTKRichComplicationView

{
    double _editingRotationInDegree;
    UIView *_contentView;
    UIView *_framingView;
    long long _position;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *framingView;
@property (nonatomic) long long position;

+ (id)keylineImageWithFilled:(_Bool)arg1 forDevice:(id)arg2;
+ (struct CGAffineTransform)transformForState:(long long)arg1;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint)arg2 position:(long long)arg3 forDevice:(id)arg4;
+ (id)keylineImageWithFilled:(_Bool)arg1 wide:(_Bool)arg2 expanded:(_Bool)arg3 forDevice:(id)arg4;
+ (id)keylineViewForDevice:(id)arg1 wide:(_Bool)arg2 expanded:(_Bool)arg3;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint)arg2 position:(long long)arg3 editingAdjustment:(long long)arg4 wide:(_Bool)arg5 forDevice:(id)arg6;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;

- (id)init;
- (void)layoutSubviews;
- (void)_editingDidEnd;
- (id)initWithFamily:(long long)arg1;
- (id)_createAndAddColoringLabel;
- (unsigned long long)_adjustFontSizeForLabel:(id)arg1 fontWeight:(double)arg2 possibleMaxWidths:(id)arg3 possibleFontSizes:(id)arg4;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;

@end
