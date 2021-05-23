/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell

{
    HUSimpleSliderControlView *_sliderView;
    NSArray *_sliderConstraints;
}

@property (copy, nonatomic) NSArray *sliderConstraints;
@property (retain, nonatomic) HUSimpleSliderControlView *sliderView;

- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end
