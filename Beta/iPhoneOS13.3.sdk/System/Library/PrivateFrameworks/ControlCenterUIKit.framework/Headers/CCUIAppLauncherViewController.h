/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class CCUIAppLauncherModule, SBFApplication, SCUIAssetProvider;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController

{
    SBFApplication *_application;
    SCUIAssetProvider *_assetProvider;
    CCUIAppLauncherModule *_module;
}

@property (weak, nonatomic) CCUIAppLauncherModule *module;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)leadingImageForMenuItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (id)_menuItemForShortcutItem:(id)arg1;
- (void)_activateApplicationForShortcutItem:(id)arg1;

@end
