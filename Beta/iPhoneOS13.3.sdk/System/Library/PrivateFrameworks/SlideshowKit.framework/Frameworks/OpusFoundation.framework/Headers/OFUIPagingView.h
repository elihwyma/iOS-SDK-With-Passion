/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

@class NSMutableSet, NSString, OFUIPagingViewController, UIScrollView;

@protocol OFUIPagingViewDelegate;

@interface OFUIPagingView

{
    UIScrollView *_scrollView;
    OFUIPagingViewController *_pagingViewController;
    id <OFUIPagingViewDelegate> _delegate;
    double _gapBetweenPages;
    long long _pagesToPreload;
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    long long _pageCount;
    long long _currentPageIndex;
    long long _previousPageIndex;
    long long _firstLoadedPageIndex;
    long long _lastLoadedPageIndex;
    _Bool _rotationInProgress;
    _Bool _scrollViewIsMoving;
    _Bool _recyclingEnabled;
}

@property (nonatomic) OFUIPagingViewController *pagingViewController;
@property (nonatomic) id <OFUIPagingViewDelegate> delegate;
@property (nonatomic) double gapBetweenPages;
@property (nonatomic) long long pagesToPreload;
@property (nonatomic, readonly) long long pageCount;
@property (nonatomic) long long currentPageIndex;
@property (nonatomic, readonly) long long previousPageIndex;
@property (nonatomic, readonly) long long firstVisiblePageIndex;
@property (nonatomic, readonly) long long lastVisiblePageIndex;
@property (nonatomic, readonly) long long firstLoadedPageIndex;
@property (nonatomic, readonly) long long lastLoadedPageIndex;
@property (nonatomic, readonly) _Bool isScrolling;
@property (nonatomic) _Bool recyclingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadData;
- (void)didRotate;
- (void)willAnimateRotation;
- (void)configurePages;
- (struct CGRect)frameForScrollView;
- (void)recyclePage:(id)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1;
- (void)configurePage:(id)arg1 forIndex:(long long)arg2;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (void)knownToBeMoving;
- (void)knownToBeIdle;
- (id)dequeueReusablePage;

@end
