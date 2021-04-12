//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSIndexPath, UICollectionView, UICollectionViewCell, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator, VUIDialogPresentationController, VUIPresentationContainerViewController;
@protocol VUIPreviewInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIPreviewInteraction *_previewInteraction;
    UICollectionView *_collectionView;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionViewCell *_stashedCell;
    BOOL _previewTransitionEnded;
    id <VUIPreviewInteractionControllerDelegate> _delegate;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    NSIndexPath *_currentIndexPath;
}

@property(readonly, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <VUIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cleanupPreviewInteraction;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)dismissConfirmation;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;

@end

