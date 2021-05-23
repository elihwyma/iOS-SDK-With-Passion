/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UILabel, UIStackView, UITapGestureRecognizer, _UIPrototypingMenuSlider;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuNumberCell : _UIPrototypingMenuCell

{
    double _min;
    double _max;
    double _current;
    UIStackView *_floatValueStackView;
    UILabel *_minLabel;
    UILabel *_maxLabel;
    _UIPrototypingMenuSlider *_slider;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) UIStackView *floatValueStackView;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *maxLabel;
@property (retain, nonatomic) _UIPrototypingMenuSlider *slider;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double current;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_prototypingSettingDidChange;
- (void)_sliderDidChangeValue:(id)arg1;
- (void)_tapRecognizerDidRecognizer:(id)arg1;

@end
