/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIControl.h>

@class UILabel, WFOpacitySlider;

__attribute__((visibility("hidden")))
@interface WFOpacitySliderView : UIControl

{
    WFOpacitySlider *_slider;
    UILabel *_opacityLabel;
}

@property (weak, nonatomic, readonly) WFOpacitySlider *slider;
@property (weak, nonatomic, readonly) UILabel *opacityLabel;
@property (nonatomic, readonly) double opacity;

- (id)init;
- (void)reset;
- (void)layoutSubviews;
- (void)didChangeOpacityValue:(id)arg1;

@end
