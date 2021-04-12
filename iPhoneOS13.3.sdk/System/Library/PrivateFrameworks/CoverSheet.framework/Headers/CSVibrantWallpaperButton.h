//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIVibrantButton.h>

@class UIView;
@protocol CSWallpaperColorProvider, CSWallpaperView, CSWallpaperViewProviding;

@interface CSVibrantWallpaperButton : SBUIVibrantButton
{
    UIView<CSWallpaperView> *_effectView;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
}

@property(nonatomic) __weak id <CSWallpaperViewProviding> wallpaperViewProvider; // @synthesize wallpaperViewProvider=_wallpaperViewProvider;
@property(nonatomic) __weak id <CSWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(readonly, nonatomic) UIView<CSWallpaperView> *effectView; // @synthesize effectView=_effectView;
// - (void).cxx_destruct;
- (void)_updateVibrancy;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

