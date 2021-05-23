/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBFolderController, SBHUnlockSettings, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBSceneManager, SBWallpaperController, SBWindowSelfHostWrapper, UIWindow;

@interface SBCoverSheetAnimator : NSObject

{
    _Bool _transitioning;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconZoomAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_coverSheetWindowHostWrapper;
    SBSceneManager *_sceneManager;
    UIWindow *_hostingWindow;
    UIWindow *_switcherWindow;
    SBWallpaperController *_wallpaperController;
    SBFolderController *_folderController;
    SBHUnlockSettings *_unlockSettings;
    UIWindow *_coverSheetWindow;
}

@property (retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator;
@property (retain, nonatomic) SBIconZoomAnimator *iconAnimator;
@property (retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper;
@property (retain, nonatomic) SBSceneManager *sceneManager;
@property (retain, nonatomic) UIWindow *hostingWindow;
@property (retain, nonatomic) UIWindow *switcherWindow;
@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (retain, nonatomic) SBFolderController *folderController;
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (weak, nonatomic) UIWindow *coverSheetWindow;

- (void)_prepareIconAnimatorIncludingLockScreen:(_Bool)arg1;
- (void)_setWallpaperToLocked:(_Bool)arg1 duration:(double)arg2;
- (void)_updateCoverSheetHosting;
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;
- (void)animateToCoverSheet:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
