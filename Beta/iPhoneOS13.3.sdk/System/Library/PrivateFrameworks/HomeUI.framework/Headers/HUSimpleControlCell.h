/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControlPanelCell.h>

@class NSArray, UIView;

@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell

{
    UIView<HUControlView> *_controlView;
    NSArray *_controlViewConstraints;
}

@property (copy, nonatomic) NSArray *controlViewConstraints;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end
