/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UICollectionView, UILongPressGestureRecognizer, UIViewController, VUIDialogPresentationController, VUIPresentationContainerViewController, VUIPreviewInteractionController;

@protocol VUIDialogInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIDialogInteractionController : NSObject

{
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    _Bool _isPresenting;
    id <VUIDialogInteractionControllerDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    VUIPreviewInteractionController *_interactionController;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (retain, nonatomic) VUIPreviewInteractionController *interactionController;
@property (weak, nonatomic) id <VUIDialogInteractionControllerDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) _Bool isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_cleanup;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)presentViewController:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;
- (void)dismissConfirmation;
- (void)longPressGestureRecognizerPressed:(id)arg1;
- (_Bool)interactionController:(id)arg1 shouldInteractionControllerBeginForIndexPath:(id)arg2;
- (void)interactionController:(id)arg1 didBeginForIndexPath:(id)arg2;
- (void)interactionController:(id)arg1 didEndForIndexPath:(id)arg2;

@end
