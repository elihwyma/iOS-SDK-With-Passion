/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSString, UISlider;

@protocol HUControlViewDelegate;

@interface HUSimpleSliderControlView : UIView

{
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    UISlider *_slider;
}

@property (nonatomic, readonly) UISlider *slider;
@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeHighlighted;

+ (Class)valueClass;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderTouchDown:(id)arg1;

@end
