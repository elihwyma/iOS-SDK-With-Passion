/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

@class NSMutableArray, NSMutableSet, NSSet, NSString, SBHUDController;

@protocol _SBHUDHostViewControllerDelegate;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController

{
    NSMutableArray *_activeTransitionContexts;
    NSMutableSet *_presentedHUDs;
    NSMutableSet *_presentingHUDs;
    NSMutableSet *_presentingHUDsTransitionContexts;
    NSMutableSet *_dismissingHUDsTransitionContexts;
    SBHUDController *_HUDController;
    id <_SBHUDHostViewControllerDelegate> _delegate;
}

@property (weak, nonatomic, readonly) SBHUDController *HUDController;
@property (weak, nonatomic) id <_SBHUDHostViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSSet *presentedHUDs;
@property (nonatomic, readonly) NSSet *presentingHUDs;
@property (nonatomic, readonly) unsigned long long numberOfActiveTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionDidFinish:(id)arg1;
- (void)dismissHUDs:(_Bool)arg1;
- (_Bool)isHUDBeingDismissed:(id)arg1;
- (void)reverseHUDDismissal:(id)arg1;
- (void)presentHUD:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isHUDBeingPresented:(id)arg1;
- (void)reverseHUDPresentation:(id)arg1;
- (void)dismissHUD:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHUDController:(id)arg1;
- (id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2;
- (void)_executePresentNewHUD:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_executeDismissHUD:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(_Bool)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_executeViewControllerTransitionContext:(id)arg1;
- (id)knownHUDForIdentifier:(id)arg1;

@end
