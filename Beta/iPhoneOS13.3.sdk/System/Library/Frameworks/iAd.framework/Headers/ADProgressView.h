/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIView.h>

@class ADPrerollSlider, UILabel;

@interface ADProgressView : UIView

{
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    ADPrerollSlider *_slider;
}

@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) ADPrerollSlider *slider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;

@end
