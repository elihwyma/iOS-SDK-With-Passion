/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIAppleTVChannelLogoLayout, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeaturedCellOverlayLayout : NSObject

{
    long long _overlayType;
    VUIAppleTVChannelLogoLayout *_channelLogoLayout;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    VUITextLayout *_disclaimerLayout;
    VUIButtonLayout *_buttonLayout;
    VUIButtonLayout *_textButtonLayout;
}

@property (nonatomic) long long overlayType;
@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *channelLogoLayout;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUITextLayout *disclaimerLayout;
@property (retain, nonatomic) VUIButtonLayout *buttonLayout;
@property (retain, nonatomic) VUIButtonLayout *textButtonLayout;

+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3;

- (void)_setupLayouts;
- (id)initWithOverlayType:(long long)arg1;

@end
