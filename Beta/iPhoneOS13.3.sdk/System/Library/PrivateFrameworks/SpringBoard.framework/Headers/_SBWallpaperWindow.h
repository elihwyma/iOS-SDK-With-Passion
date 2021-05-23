/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSecureWindow.h>

@class SBWallpaperDefaults;

@protocol SBWallpaperWindowDelegate;

@interface _SBWallpaperWindow : SBSecureWindow

{
    SBWallpaperDefaults *_wallpaperDefaults;
    id <SBWallpaperWindowDelegate> _delegate;
}

@property (weak, nonatomic) id <SBWallpaperWindowDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (long long)activeInterfaceOrientation;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;
- (void)_observeDefaults;

@end
