/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUIMediaTagsViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIOfferLayout : TVViewLayout

{
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_logoLayout;
    VUITextLayout *_channelNameTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_textLayout;
    VUITextLayout *_focusedTextLayout;
    TVImageLayout *_badgeLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIButtonLayout *_versionsButtonLayout;
    NSShadow *_shadow;
    double _borderWidth;
    UIColor *_borderColor;
    struct TVCornerRadii _borderRadii;
}

@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) TVImageLayout *appIconLayout;
@property (retain, nonatomic) TVImageLayout *logoLayout;
@property (retain, nonatomic) VUITextLayout *channelNameTextLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *focusedTextLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUIMediaTagsViewLayout *tagsLayout;
@property (retain, nonatomic) VUIButtonLayout *versionsButtonLayout;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) struct TVCornerRadii borderRadii;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)subtitleTextLayout;

- (id)init;

@end
