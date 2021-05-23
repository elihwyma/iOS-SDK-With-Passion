/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIAppleTVChannelLogoView, VUIButton, VUIChannelBannerLayout, VUIFocusableTextView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerView : UIView

{
    IKViewElement *_viewElement;
    VUIChannelBannerLayout *_layout;
    VUIAppleTVChannelLogoView *_appleTVChannelLogoView;
    VUIButton *_subscribeButton;
    VUILabel *_disclaimerTextLabel;
    VUIFocusableTextView *_descriptionTextView;
    NSArray *_textLabels;
    UIView *_bgColorView;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIChannelBannerLayout *layout;
@property (retain, nonatomic) VUIAppleTVChannelLogoView *appleTVChannelLogoView;
@property (retain, nonatomic) VUIButton *subscribeButton;
@property (retain, nonatomic) VUILabel *disclaimerTextLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) NSArray *textLabels;
@property (nonatomic, readonly) double topThreshold;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint)arg2 maxWidth:(double)arg3;

@end
