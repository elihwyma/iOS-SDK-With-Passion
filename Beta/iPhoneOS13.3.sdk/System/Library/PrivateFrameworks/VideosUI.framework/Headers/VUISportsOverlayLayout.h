/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIScoreboardLayout, VUITextBadgeLayout;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayLayout : TVViewLayout

{
    VUIScoreboardLayout *_scoreboardLayout;
    VUITextBadgeLayout *_textBadgeLayout;
    TVImageLayout *_appImageLayout;
    TVImageLayout *_logoImageLayout;
}

@property (retain, nonatomic) VUIScoreboardLayout *scoreboardLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;
@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) TVImageLayout *logoImageLayout;

+ (id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2;
+ (long long)_scoreboardTypeForElement:(id)arg1;
+ (id)_sportsOverlayALayoutWithElement:(id)arg1;
+ (id)_sportsOverlayBLayoutWithElement:(id)arg1;
+ (id)_sportsOverlayCLayoutWithElement:(id)arg1;

@end
