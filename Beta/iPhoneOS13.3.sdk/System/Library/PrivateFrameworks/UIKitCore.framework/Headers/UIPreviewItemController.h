/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class CADisplayLink, MLULookupItem, NSArray, NSDictionary, NSString, UIGestureRecognizer, UIImageView, UIPreviewInteractionController, UIView, UIViewController;

@protocol UIPreviewItemDelegate;

@interface UIPreviewItemController : NSObject <Swift>

{
    MLULookupItem *_lookupItem;
    UIPreviewInteractionController *_previewInteractionController;
    UIView *_previewIndicatorView;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    CADisplayLink *_previewIndicatorDisplayLink;
    double _lastPreviewIndicatorAnimationTimestamp;
    double _previewIndicatorAnimationTargetAlpha;
    struct CGRect _previewIndicatorBoundingRect;
    _Bool _previewIndicatorUsesStandardAnimation;
    _Bool _contentManagedByClient;
    UIPreviewItemController *_strongSelf;
    _Bool _interactionInProgress;
    id <UIPreviewItemDelegate> _delegate;
    long long _type;
    NSDictionary *_previewData;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    UIView *_view;
}

@property (weak, nonatomic) id <UIPreviewItemDelegate> delegate;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *previewData;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) _Bool interactionInProgress;
@property (weak, nonatomic, readonly) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (_Bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (id)initWithView:(id)arg1;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (_Bool)_isMobileSafariRestricted;
- (_Bool)_shouldCancelPreviewWithNegativeFeedback;
- (void)stopInteraction;
- (id)previewViewControllerForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3;
- (void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(_Bool)arg2;
- (void)updatePreviewIndicatorAnimation:(id)arg1;
- (void)startInteraction;
- (void)setupPreviewIndicatorInSourceView:(id)arg1;
- (void)clearPreviewIndicator;

@end
