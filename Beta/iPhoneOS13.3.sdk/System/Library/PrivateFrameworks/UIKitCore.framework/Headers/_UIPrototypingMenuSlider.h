/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UISlider.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuSlider : UISlider

{
    _Bool _didBringKnobToFront;
    double _stepSize;
    UIView *_knobView;
    UIImageView *_knobBGView;
    UILabel *_currentValueLabel;
}

@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) UIImageView *knobBGView;
@property (retain, nonatomic) UILabel *currentValueLabel;
@property (nonatomic) double stepSize;
@property (nonatomic, readonly) struct CGPoint knobCenter;

- (void)decrement;
- (void)increment;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (void)_setKnobViewProminent:(_Bool)arg1 animated:(_Bool)arg2;

@end
