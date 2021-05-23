/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLAppearance, QLItemViewController;

@protocol QLPreviewItemViewControllerDelegate;

@interface QLItemAggregatedViewController

{
    _Bool _isVisible;
    _Bool _isAppearing;
    _Bool _fullScreen;
    QLAppearance *_appearance;
    id <QLPreviewItemViewControllerDelegate> _delegate;
    QLItemViewController *_currentPreviewViewController;
}

@property (retain, nonatomic) QLItemViewController *currentPreviewViewController;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (id)appearance;
- (struct CGSize)preferredContentSize;
- (id)safeAreaLayoutGuide;
- (id)accessoryView;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)scrollView;
- (id)transitioningView;
- (id)draggableView;
- (id)printer;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (_Bool)canSwipeToDismiss;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (id)fullscreenBackgroundColor;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canShowNavBar;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(_Bool)arg2;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;
- (id)registeredKeyCommands;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillFinishAppearing;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;
- (_Bool)canToggleFullScreen;
- (_Bool)canShowToolBar;
- (id)parallaxView;
- (void)prepareForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePreviewEditedCopyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
