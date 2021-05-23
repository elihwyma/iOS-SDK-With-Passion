/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CEKApertureSlider, CEKSlider, CEKWheelScrubberView;

@interface CAMUtilityBar : UIView

{
    CEKWheelScrubberView *_filterScrubberView;
    CEKApertureSlider *_apertureSlider;
    CEKSlider *_intensitySlider;
    unsigned long long _visibleContent;
}

@property (retain, nonatomic) CEKWheelScrubberView *filterScrubberView;
@property (retain, nonatomic) CEKApertureSlider *apertureSlider;
@property (retain, nonatomic) CEKSlider *intensitySlider;
@property (nonatomic) unsigned long long visibleContent;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_layoutFilterScrubberView;
- (void)setVisibleContent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2;
- (void)_updateVisibleViewAnimated:(_Bool)arg1;
- (void)_layoutPortraitApertureSlider;
- (void)_layoutSliderView:(id)arg1;

@end
