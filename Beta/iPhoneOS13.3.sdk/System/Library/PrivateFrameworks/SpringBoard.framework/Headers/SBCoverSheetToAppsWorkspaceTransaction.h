/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDismissOverlaysAnimationController, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction

{
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
    _Bool _preservesBanners;
}

@property (nonatomic) _Bool preservesBanners;

- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;
- (void)_dismissOverlaysIfNeeded;
- (unsigned long long)_dismissOverlaysOptions;

@end
