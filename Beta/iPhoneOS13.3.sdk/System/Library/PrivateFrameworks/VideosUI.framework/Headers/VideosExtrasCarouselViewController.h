/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString, UICollectionViewLayout, VideosExtrasCarouselCollectionView;

@protocol VideosExtrasCarouselCollectionViewLayout, VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselViewController : UIViewController <Swift>

{
    _Bool _revealingNavigationBarDuringTransition;
    id <VideosExtrasCarouselViewControllerDataSource> _dataSource;
    id <VideosExtrasCarouselViewControllerDelegate> _delegate;
    VideosExtrasCarouselCollectionView *_carouselCollectionView;
    UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *_carouselCollectionViewLayout;
}

@property (retain, nonatomic) VideosExtrasCarouselCollectionView *carouselCollectionView;
@property (retain, nonatomic) UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout;
@property (nonatomic, getter=isRevealingNavigationBarDuringTransition) _Bool revealingNavigationBarDuringTransition;
@property (weak, nonatomic) id <VideosExtrasCarouselViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <VideosExtrasCarouselViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long indexOfVisibleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)_numberOfItems;
- (_Bool)_isPhone;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_ensureScrollViewSnaps;
- (void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2;
- (void)_updateOpacityOfTextInVisibleCells;
- (void)_updateWindowSizeForVisibleCells;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;
- (void)_snapTargetContentOffset:(inout struct CGPoint *)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint)arg3;
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1;
- (void)subviewsDidChangeForCarouselCollectionView:(id)arg1;

@end
