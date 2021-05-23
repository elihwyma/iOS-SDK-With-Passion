/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

@class NSString, SBLogoutDebugBlockingViewController, SBLogoutProgressView, SBMultiUserDefaults, SBPlatformController, SBTransientOverlayWallpaperEffectView, UMUser;

@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController

{
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    id <SBLogoutProgressDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLogoutProgressDataSource> dataSource;
@property (weak, nonatomic) id <SBLogoutProgressDelegate> delegate;
@property (nonatomic, readonly) UMUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)isContentOpaque;
- (long long)preferredStatusBarStyle;
- (id)_legibilitySettings;
- (void)_updateData;
- (long long)idleTimerMode;
- (void)setContainerOrientation:(long long)arg1;
- (void)_updateLegibility;
- (void)refreshData;
- (long long)idleTimerDuration;
- (long long)idleWarnMode;
- (void)prepareForRestart;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)initWithUserAccount:(id)arg1;
- (_Bool)_supportsDebugUI;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize)arg1;

@end
