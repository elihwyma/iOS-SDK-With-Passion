/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewCell, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator, VUIDialogPresentationController, VUIPresentationContainerViewController;

@protocol VUIPreviewInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIPreviewInteractionController : NSObject

{
    UIPreviewInteraction *_previewInteraction;
    UICollectionView *_collectionView;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionViewCell *_stashedCell;
    _Bool _previewTransitionEnded;
    id <VUIPreviewInteractionControllerDelegate> _delegate;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    NSIndexPath *_currentIndexPath;
}

@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) id <VUIPreviewInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;
- (void)dismissConfirmation;
- (void)_cleanupPreviewInteraction;

@end
