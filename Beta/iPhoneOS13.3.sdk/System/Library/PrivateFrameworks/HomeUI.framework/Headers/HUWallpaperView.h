/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFWallpaperSlice;

@interface HUWallpaperView : UIView

{
    HFWallpaperSlice *_wallpaperSlice;
    UIView *_wallpaperContentView;
}

@property (retain, nonatomic) UIView *wallpaperContentView;
@property (retain, nonatomic) HFWallpaperSlice *wallpaperSlice;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect)arg1;

@end
