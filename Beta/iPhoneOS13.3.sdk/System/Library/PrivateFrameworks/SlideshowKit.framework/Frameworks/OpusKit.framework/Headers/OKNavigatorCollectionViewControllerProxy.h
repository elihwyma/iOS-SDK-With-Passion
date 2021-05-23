/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorViewController.h>

#import <OpusKit/Swift-Protocol.h>

@class NSArray, NSString, OKNavigatorCollectionView, OKPageViewController;

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <Swift>

{
    OKNavigatorCollectionView *_collectionView;
    struct CGPoint _collectionViewContentPreviousOffset;
    _Bool _scrollViewDidEndDragging;
    NSArray *_orderedPagesNames;
    OKPageViewController *_lastPageViewController;
}

@property (retain, nonatomic) OKPageViewController *lastPageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prepareForDisplay;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (_Bool)isHorizontal;
- (void)_scrollViewDidCompleteScrolling;
- (void)resolutionDidChange;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSettingTransition:(unsigned long long)arg1;
- (void)setSettingOrientation:(unsigned long long)arg1;
- (void)prepareAdjacentPages;
- (void)updateCollectionView;
- (void)prepareAdjacentPages:(unsigned long long)arg1 withDirection:(unsigned long long)arg2;
- (void)prepareAdjacentPages:(unsigned long long)arg1;
- (void)prepareAdjacentPagesForScrolling;
- (void)updateCurrentPageViewController;
- (void)updateCollectionViewLayoutItemSize;
- (id)currentPageViewControllerIndexPath;

@end
