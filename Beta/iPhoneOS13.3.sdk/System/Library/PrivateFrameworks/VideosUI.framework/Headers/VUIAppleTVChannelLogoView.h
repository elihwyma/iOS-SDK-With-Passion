/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUIAppleTVChannelLogoLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIAppleTVChannelLogoView : UIView

{
    _TVImageView *_channelLogoView;
    VUIAppleTVChannelLogoLayout *_layout;
    _TVImageView *_appleTVImageView;
    VUILabel *_channelsLabel;
}

@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *layout;
@property (retain, nonatomic) _TVImageView *appleTVImageView;
@property (retain, nonatomic) VUILabel *channelsLabel;
@property (retain, nonatomic) _TVImageView *channelLogoView;

+ (id)logoViewWithChannelImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end
