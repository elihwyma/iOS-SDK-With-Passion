/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIAppleTVChannelLogoView, VUIFeaturedCellOverlayLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIFeaturedCellOverlayView : UIView

{
    IKViewElement *_viewElement;
    _TVImageView *_logoImageView;
    VUIAppleTVChannelLogoView *_appleTVChannelLogoView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_disclaimerLabel;
    NSArray *_buttons;
    VUIFeaturedCellOverlayLayout *_overlayLayout;
}

@property (retain, nonatomic) VUIFeaturedCellOverlayLayout *overlayLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) VUIAppleTVChannelLogoView *appleTVChannelLogoView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;

+ (id)featuredCellOverViewFromElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3;

- (void)layoutSubviews;

@end
