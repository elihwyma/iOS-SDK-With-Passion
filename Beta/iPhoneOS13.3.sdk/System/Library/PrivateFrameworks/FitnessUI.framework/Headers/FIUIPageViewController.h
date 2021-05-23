/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIViewController.h>

@class NSCache, NSString, UICollectionView, UICollectionViewFlowLayout, UIPageControl;

@protocol FIUIPageViewControllerDataSource, FIUIPageViewControllerDelegate;

@interface FIUIPageViewController : UIViewController

{
    _Bool _showsPagingIndicator;
    _Bool _userDidTapPageControl;
    _Bool _shouldNotifyDelegateWhenScrollViewSettles;
    id <FIUIPageViewControllerDataSource> _dataSource;
    id <FIUIPageViewControllerDelegate> _delegate;
    long long _scrollDirection;
    long long _currentlyDisplayedIndex;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSCache *_viewControllerForIndexPath;
}

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (nonatomic) _Bool userDidTapPageControl;
@property (retain, nonatomic) NSCache *viewControllerForIndexPath;
@property (nonatomic) _Bool shouldNotifyDelegateWhenScrollViewSettles;
@property (weak, nonatomic) id <FIUIPageViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <FIUIPageViewControllerDelegate> delegate;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) long long currentlyDisplayedIndex;
@property (nonatomic) _Bool showsPagingIndicator;
@property (nonatomic, readonly) UIViewController *currentlyDisplayedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)_scrollViewDidStop;
- (void)_pageSelectedWithControl:(id)arg1;
- (void)setCurrentlyDisplayedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_addViewController:(id)arg1 toCell:(id)arg2;

@end
