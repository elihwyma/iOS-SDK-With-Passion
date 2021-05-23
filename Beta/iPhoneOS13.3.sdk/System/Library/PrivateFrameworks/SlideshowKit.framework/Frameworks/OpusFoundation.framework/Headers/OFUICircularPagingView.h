/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

@class NSString, OFUICircularPagingViewController, UIScrollView, UIView;

@protocol OFUICircularPagingViewDelegate;

@interface OFUICircularPagingView

{
    double _gapBetweenPages;
    OFUICircularPagingViewController *_circularPagingViewController;
    id <OFUICircularPagingViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_previousPagingView;
    UIView *_currentPagingView;
    UIView *_nextPagingView;
    _Bool _rotationInProgress;
    _Bool _scrollViewIsMoving;
}

@property (nonatomic) OFUICircularPagingViewController *circularPagingViewController;
@property (nonatomic) id <OFUICircularPagingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadData;
- (void)_updateLayout;
- (void)didRotate;
- (void)willAnimateRotation;
- (struct CGRect)_frameForScrollView;
- (struct CGRect)_frameForPageAtIndex:(unsigned long long)arg1;
- (id)pagingViewAtIndex:(unsigned long long)arg1;

@end
