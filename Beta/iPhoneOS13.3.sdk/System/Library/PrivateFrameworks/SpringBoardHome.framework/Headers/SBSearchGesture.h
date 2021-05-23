/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <Swift>

{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    _Bool _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    _Bool _isDismissing;
    _Bool _ignoreScrollingEnded;
    _Bool _animatingResetOrReveal;
    UIView *_targetView;
}

@property (retain, nonatomic) UIView *targetView;
@property (nonatomic, readonly, getter=isAnimatingResetOrReveal) _Bool animatingResetOrReveal;
@property (nonatomic, readonly, getter=isShowingSearch) _Bool showingSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)searchHeaderHeight;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)resetAnimated:(_Bool)arg1;
- (void)revealAnimated:(_Bool)arg1;
- (void)updateForRotation;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_updateScrollingEnabled;
- (_Bool)_isShowingSearch;

@end
