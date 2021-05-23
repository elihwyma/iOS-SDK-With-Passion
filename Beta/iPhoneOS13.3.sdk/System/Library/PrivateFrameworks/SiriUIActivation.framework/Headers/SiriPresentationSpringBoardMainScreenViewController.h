/*
 Image: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
 */

#import <SiriUIActivation/SiriPresentationViewController.h>

@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate;

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController

@property (retain, nonatomic) id <SiriPresentationSpringBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate;

- (id)init;
- (id)initWithIdentifier:(long long)arg1;
- (id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(struct CGRect)arg2;
- (void)prewarmFlamesWithPresentationFrame:(struct CGRect)arg1;
- (void)setShowsStatusBar:(_Bool)arg1;
- (void)setFluidDismissalState:(id)arg1;
- (void)requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;

@end
