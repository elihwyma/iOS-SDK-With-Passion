/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIProgressBarLayout, VUITextBadgeLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIOverlayLayout : TVViewLayout

{
    _Bool _isDarkTheme;
    long long _overlayType;
    VUITextLayout *_titleLayout;
    VUITextBadgeLayout *_textBadgeLayout;
    TVImageLayout *_badgeLayout;
    VUIProgressBarLayout *_progressBarLayout;
}

@property (nonatomic) long long overlayType;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUIProgressBarLayout *progressBarLayout;

+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3;
+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 mediaItem:(id)arg3;

- (void)_updateLayoutWithElement:(id)arg1 andType:(long long)arg2;
- (void)_updateLayoutWithMediaItem:(id)arg1 type:(long long)arg2;
- (id)_navBrickTitleLayout;
- (id)_editorialTitleLayout;
- (id)_spotlightTitleLayout;
- (id)_ribbonTitleLayout;

@end
