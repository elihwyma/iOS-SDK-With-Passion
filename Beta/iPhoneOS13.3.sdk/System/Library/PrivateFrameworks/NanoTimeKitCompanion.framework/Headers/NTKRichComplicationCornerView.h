/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath;

@interface NTKRichComplicationCornerView : NTKRichComplicationView

{
    long long _position;
    UIBezierPath *_hitTestPath;
    struct CGRect _hitTestBounds;
    double _innerComponentRotationInDegree;
    double _outerComponentRotationInDegree;
}

@property (nonatomic) double innerComponentRotationInDegree;
@property (nonatomic) double outerComponentRotationInDegree;
@property (nonatomic) long long position;

+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
+ (id)keylineImageForPosition:(long long)arg1 filled:(_Bool)arg2 forDevice:(id)arg3 narrowTopSlots:(_Bool)arg4;
+ (id)layoutRuleForState:(long long)arg1 position:(long long)arg2 faceBounds:(struct CGRect)arg3 forDevice:(id)arg4 narrowTopSlots:(_Bool)arg5;
+ (id)keylineViewForPosition:(long long)arg1 forDevice:(id)arg2 narrowTopSlots:(_Bool)arg3;
+ (struct CGSize)viewSizeForDevice:(id)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (struct UIEdgeInsets)_keylinePaddingForPosition:(long long)arg1 conentSize:(struct CGSize)arg2 forDevice:(id)arg3 narrowTopSlots:(_Bool)arg4;
+ (struct CGAffineTransform)transformForState:(long long)arg1 position:(long long)arg2 device:(id)arg3;
+ (id)_createHitTestPathWithViewBounds:(struct CGRect)arg1 position:(long long)arg2 forDevice:(id)arg3;

- (id)init;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_editingDidEnd;
- (id)initWithFamily:(long long)arg1;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1;
- (void)_layoutView:(id)arg1 origin:(struct CGPoint)arg2 editingTranslation:(struct CGPoint)arg3 editingRotationInDegree:(double)arg4;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_layoutCurvedLabel:(id)arg1 centerAngleInDegree:(double)arg2 editingRotationInDegree:(double)arg3;

@end
