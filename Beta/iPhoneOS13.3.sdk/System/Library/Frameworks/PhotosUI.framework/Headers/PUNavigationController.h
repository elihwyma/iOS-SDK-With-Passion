/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, PUAbstractNavigationBanner, UIViewController, _UINavigationControllerPalette;

@protocol PXNavigationRoot;

@interface PUNavigationController : UINavigationController

{
    _Bool _pu_preventsAutorotation;
    CDUnknownBlockType _ppt_onDidShowViewControllerBlock;
    PUAbstractNavigationBanner *__banner;
    _UINavigationControllerPalette *__palette;
    id <PXNavigationRoot> _navigationRoot;
    unsigned long long _pu_supportedInterfaceOrientations;
    long long __barStyle;
    UIViewController *__currentToolbarViewController;
}

@property (retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner;
@property (retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette;
@property (retain, nonatomic) id <PXNavigationRoot> navigationRoot;
@property (nonatomic, readonly) unsigned long long pu_supportedInterfaceOrientations;
@property (nonatomic, readonly) _Bool pu_preventsAutorotation;
@property (nonatomic, setter=_setBarStyle:) long long _barStyle;
@property (weak, nonatomic, setter=_setCurrentToolbarViewController:) UIViewController *_currentToolbarViewController;
@property (copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) CDUnknownBlockType ppt_onDidShowViewControllerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)_setNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_commonPUNavigationControllerInitialization;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)pu_setPreventsAutorotation:(_Bool)arg1;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)_insertNavigationDisplayModeButtonItem;
- (void)_removeNavigationDisplayModeButtonItem;
- (void)_updateBarStyle;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg2;
- (id)_extendedToolbar;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(_Bool)arg2;

@end
