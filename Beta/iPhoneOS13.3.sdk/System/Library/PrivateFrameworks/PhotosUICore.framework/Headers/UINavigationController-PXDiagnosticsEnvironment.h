/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationController.h>

@class PXSnapBackController;

@interface UINavigationController (PXDiagnosticsEnvironment)

@property (nonatomic, readonly) PXSnapBackController *px_snapBackController;

+ (id)px_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
+ (id)px_defaultDelegateForNavigationController:(id)arg1;
+ (id)px_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
+ (id)px_navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;

- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)px_HDRFocus;
- (double)px_imageModulationIntensity;
- (_Bool)px_isImageModulationEnabled;
- (id)px_topViewController;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (_Bool)px_allowsTabSwitching;
- (void)_px_prepareNavigationFromViewController:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)px_preparePopToViewController:(id)arg1 forced:(_Bool)arg2;
- (id)px_popToViewControllerPreceedingViewController:(id)arg1 animated:(_Bool)arg2;
- (void)px_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_ppt_transitionAnimationCompletionHandler;
- (void)_ppt_setTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_notifyTransitionAnimationDidComplete;

@end
