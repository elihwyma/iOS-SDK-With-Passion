/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, PXTilingScrollInfo;

@protocol PXAnonymousScrollView, PXTilingScrollControllerUpdateDelegate, UICoordinateSpace;

@interface PXScrollViewController : NSObject

{
    NSHashTable *_willLayoutSubviewsObservers;
    NSHashTable *_didLayoutSubviewsObservers;
    NSHashTable *_didScrollObservers;
    _Bool _isDecelerating;
    _Bool _isDragging;
    _Bool _isTracking;
    _Bool _isScrubbing;
    _Bool _isManuallyChanging;
    _Bool _deferContentOffsetUpdates;
    id <PXTilingScrollControllerUpdateDelegate> _updateDelegate;
    PXTilingScrollInfo *_scrollInfo;
    struct NSObject *_scrollView;
    NSObject<UICoordinateSpace> *_contentCoordinateSpace;
    NSHashTable *__observers;
    long long _activeScrollAnimations;
    struct CGSize _scrollViewContentSize;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) long long activeScrollAnimations;
@property (nonatomic, readonly) struct CGSize scrollViewReferenceSize;
@property (nonatomic, readonly) struct CGRect scrollViewActiveRect;
@property (nonatomic, readonly) struct CGRect scrollViewVisibleRect;
@property (nonatomic, readonly) struct CGRect scrollViewConstrainedVisibleRect;
@property (nonatomic, readonly) struct CGRect scrollViewTargetRect;
@property (nonatomic, readonly) struct CGSize scrollViewContentSize;
@property (nonatomic) struct CGRect scrollViewContentBounds;
@property (nonatomic, readonly) NSObject<PXAnonymousScrollView> *scrollView;
@property (nonatomic, readonly) _Bool isAnimatingScroll;
@property (nonatomic, readonly) _Bool isDecelerating;
@property (nonatomic, readonly) _Bool isDragging;
@property (nonatomic, readonly) _Bool isTracking;
@property (nonatomic, readonly) _Bool isScrubbing;
@property (nonatomic, readonly) _Bool isManuallyChanging;
@property (nonatomic, readonly) _Bool hasWindow;
@property (nonatomic, readonly) NSObject<UICoordinateSpace> *contentCoordinateSpace;
@property (nonatomic) struct CGPoint visibleOrigin;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) _Bool deferContentOffsetUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXTilingScrollControllerUpdateDelegate> updateDelegate;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) struct CGRect activeRect;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic, readonly) struct CGRect constrainedVisibleRect;
@property (nonatomic, readonly) struct CGRect targetRect;
@property (nonatomic) struct CGRect contentBounds;
@property (copy, nonatomic) PXTilingScrollInfo *scrollInfo;

- (id)init;
- (void)addSubview:(struct NSObject *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)addSubviewToScrollView:(struct NSObject *)arg1;
- (_Bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setScrollViewNeedsLayout;
- (void)scrollViewLayoutIfNeeded;
- (void)applyScrollInfo:(id)arg1;
- (void)scrollViewDidScroll;
- (void)setActiveScrollAnimations:(long long)arg1;
- (void)scrollViewWillLayout;
- (void)scrollViewDidLayout;
- (void)scrollViewWillBeginScrolling;
- (void)willEndScrollingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewContentBoundsDidChange;
- (_Bool)scrollViewShouldScrollToTop;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;
- (void)scrollViewDidEndScrollingAnimation;
- (void)scrollToEdge:(unsigned int)arg1;
- (void)performManualChange:(CDUnknownBlockType)arg1;

@end
