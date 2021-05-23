/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIProgressBarLayout, VUITextBadgeLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpNextOverlayLayout : TVViewLayout

{
    TVImageLayout *_appImageLayout;
    TVImageLayout *_logoImageLayout;
    VUIProgressBarLayout *_progressBarLayout;
    TVImageLayout *_badgeLayout;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    VUITextBadgeLayout *_textBadgeLayout;
}

@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) TVImageLayout *logoImageLayout;
@property (retain, nonatomic) VUIProgressBarLayout *progressBarLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)logoImageLayout;
+ (id)appImageLayout;
+ (void)_setAppImageDefaultSize:(id)arg1;
+ (void)_setLogoImageDefaultSize:(id)arg1;

- (id)init;

@end
