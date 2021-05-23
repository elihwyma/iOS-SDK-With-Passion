/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

@class NSMutableArray, NSString;

@interface GKNavigationController : UINavigationController

{
    NSMutableArray *_deferredTransitions;
}

@property (retain, nonatomic) NSMutableArray *deferredTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)setupGKNavigationController;
- (_Bool)hasEmbeddedPopoverNavigationStack;
- (id)popEmbeddedPopoverViewControllers;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)targetViewControllerForAction:(SEL)arg1;
- (void)_performDeferredTransition;
- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (id)_gkViewControllersForRestoringPopover;

@end
