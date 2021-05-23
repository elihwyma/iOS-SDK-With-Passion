/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUTileController, PUTilingView, UIView, UIViewController;

@protocol PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition, PUTilingViewControllerTransition;

__attribute__((visibility("hidden")))
@interface PUInteractiveDismissalController : NSObject

{
    struct {
        _Bool respondsToCanBeginDismissalAtLocationFromProvider;
        _Bool respondsToTilingView;
        _Bool respondsToDesignatedTileController;
    } _delegateFlags;
    _Bool _isHandlingDismissalInteraction;
    _Bool __needsUpdateGestureRecognizers;
    id <PUInteractiveDismissalControllerDelegate> _delegate;
    UIViewController *__viewController;
    UIView *__viewHostingGestureRecognizers;
    id <PUInterruptibleViewControllerTransition> __interruptibleViewControllerTransition;
}

@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController;
@property (retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers;
@property (retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) id <PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) PUTileController *designatedTileController;
@property (nonatomic, readonly) id <PUTilingViewControllerTransition> tilingViewControllerTransition;
@property (weak, nonatomic) id <PUInteractiveDismissalControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool isHandlingDismissalInteraction;

- (void)_updateIfNeeded;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)_invalidateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (void)invalidateDelegateData;
- (_Bool)canBeginDismissalAtLocationFromProvider:(id)arg1;
- (long long)_preferredDismissalTransitionType;
- (void)beginDismissal;
- (void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(_Bool)arg2;
- (void)endDismissal:(_Bool)arg1;
- (void)_invalidateViewController;
- (void)_updateViewControllerIfNeeded;
- (void)_invalidateViewHostingGestureRecognizers;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;

@end
