/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSMutableSet, NSObject, SBBestAppSuggestion, SBSwitcherAppSuggestionBannerView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;

@interface SBSwitcherAppSuggestionViewController : UIViewController

{
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _showSuggestions;
    SBSwitcherAppSuggestionBannerView *_bannerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _presentingOrDismissingBanner;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    NSMutableSet *_pauseSuggestionUpdateReasons;
    _Bool _suggestionQueueSuspended;
    id <SBSwitcherAppSuggestionViewControllerDelegate> _delegate;
}

@property (nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) _Bool suggestionQueueSuspended;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic) _Bool showSuggestions;
@property (weak, nonatomic) id <SBSwitcherAppSuggestionViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (unsigned long long)_bannerStyle;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)_activateCurrentSuggestion;
- (void)_evaluateSuggestionQueueSuspension;
- (void)_updateBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleBannerTap:(id)arg1;
- (struct CGRect)_idleOnscreenRectForBottomBanner;
- (struct CGRect)_offscreenRectForBottomBanner;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateBestAppSuggestion;
- (void)beginPausingSuggestionUpdatesForReason:(id)arg1;
- (void)endPausingSuggestionUpdatesForReason:(id)arg1;
- (_Bool)_hasSuggestionBannerView;

@end
