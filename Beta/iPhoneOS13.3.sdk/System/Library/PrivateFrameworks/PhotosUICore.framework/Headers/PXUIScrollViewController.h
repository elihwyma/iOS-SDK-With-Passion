/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXScrollViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, UIScrollView, _PXUIScrollView;

@interface PXUIScrollViewController : PXScrollViewController <Swift>

{
    _PXUIScrollView *_scrollView;
    _Bool _isScrollingToTop;
}

@property (nonatomic, setter=setScrollingToTop:) _Bool isScrollingToTop;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)isDragging;
- (_Bool)isTracking;
- (_Bool)isDecelerating;
- (struct CGSize)scrollViewContentSize;
- (void)scrollViewWillLayoutSubviews:(id)arg1;
- (void)scrollViewDidLayoutSubviews:(id)arg1;
- (void)scrollView:(id)arg1 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg2;
- (_Bool)hasWindow;
- (void)addSubviewToScrollView:(struct NSObject *)arg1;
- (void)setVisibleOrigin:(struct CGPoint)arg1;
- (_Bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setScrollViewNeedsLayout;
- (void)scrollViewLayoutIfNeeded;
- (struct CGSize)scrollViewReferenceSize;
- (struct CGRect)scrollViewActiveRect;
- (struct CGRect)scrollViewVisibleRect;
- (struct CGRect)scrollViewConstrainedVisibleRect;
- (struct CGRect)scrollViewTargetRect;
- (struct CGRect)scrollViewContentBounds;
- (void)setScrollViewContentBounds:(struct CGRect)arg1;
- (void)setDeferContentOffsetUpdates:(_Bool)arg1;
- (_Bool)deferContentOffsetUpdates;
- (void)applyScrollInfo:(id)arg1;
- (id)contentCoordinateSpace;

@end
