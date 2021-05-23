/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUIAppleTVChannelLogoLayout, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerLayout : TVViewLayout

{
    _Bool _isSubscribed;
    _Bool _descriptionPreferredOnPhoneSizeClass;
    VUIAppleTVChannelLogoLayout *_channelLogoLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_textLayout;
    VUITextLayout *_disclaimerTextLayout;
    VUIButtonLayout *_subscribeButtonLayout;
}

@property (nonatomic) _Bool isSubscribed;
@property (nonatomic) _Bool descriptionPreferredOnPhoneSizeClass;
@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *channelLogoLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *disclaimerTextLayout;
@property (retain, nonatomic) VUIButtonLayout *subscribeButtonLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
