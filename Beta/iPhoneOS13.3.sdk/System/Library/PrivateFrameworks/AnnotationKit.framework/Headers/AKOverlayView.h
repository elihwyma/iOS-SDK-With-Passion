/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class AKMainEventHandler, AKPageController, UIScrollView;

@interface AKOverlayView : UIView

{
    _Bool _isObserving;
    _Bool _deferWasMovedToSuperviewUntilMoveToWindow;
    _Bool _scrollViewIsInLiveMagnify;
    AKPageController *_pageController;
    AKMainEventHandler *_mainEventHandler;
    UIScrollView *_observedScrollView;
}

@property (weak) AKPageController *pageController;
@property (weak) AKMainEventHandler *mainEventHandler;
@property _Bool isObserving;
@property _Bool deferWasMovedToSuperviewUntilMoveToWindow;
@property (retain) UIScrollView *observedScrollView;
@property _Bool scrollViewIsInLiveMagnify;

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayersOfLayer:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)delete:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithPageController:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)updateLayers;
- (void)editTextAnnotation:(id)arg1;
- (void)_teardownObservation;
- (void)_willRemoveFromOldSuperview;
- (void)_wasMovedToNewSuperview;
- (void)_updateLayersUsingScrollView;
- (void)_postScrollViewRectChangedNotification;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(_Bool)arg1;
- (void)_willStartLiveMagnify:(id)arg1;
- (void)_willEndLiveMagnify:(id)arg1;
- (void)_scrollViewDidEndAnimation:(id)arg1;
- (void)_scrollViewDidScrollToTop:(id)arg1;
- (void)_setupObservation;
- (void)_postScrollViewScrollOrMagnifyEndNotification;

@end
