/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBWallpaperEffectView;

@interface SBIconBlurryBackgroundView : UIView

{
    SBWallpaperEffectView *_wallpaperView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;

@end
