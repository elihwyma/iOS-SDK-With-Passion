/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBSpotlightTransientOverlaySpotlightViewController, UIVisualEffectView;

@protocol SBSpotlightTransientOverlayViewControllerDelegate;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <Swift>

{
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    id <SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBSpotlightTransientOverlayViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (_Bool)isContentOpaque;
- (void)dismissSearchView;
- (_Bool)handleHomeButtonPress;
- (long long)preferredUnlockedGestureDismissalStyle;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredDisplayLayoutElementIdentifier;
- (CDUnknownBlockType)sceneDeactivationPredicate;

@end
