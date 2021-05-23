/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBFloatingDockViewController, SBIconController, SBRootFolderController, SBWallpaperController, _SBHomeScreenFolderDelegate;

@interface SBHomeScreenPreviewView : UIView

{
    UIView *_folderContent;
    UIView *_floatingDock;
    UIView *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
    SBIconController *_iconController;
    SBWallpaperController *_wallpaperController;
    SBFloatingDockViewController *_floatingDockViewController;
}

@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (nonatomic, readonly) SBFloatingDockViewController *floatingDockViewController;

- (void)layoutSubviews;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)recycleIconView:(id)arg1;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5;

@end
