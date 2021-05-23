/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UIView, VUIShelfView;

__attribute__((visibility("hidden")))
@interface VUIShelfViewController : UIViewController <Swift>

{
    _Bool _shouldUpdateBeforeLayout;
    UICollectionView *_collectionView;
    UIView *_headerView;
    long long _gridStyle;
    VUIShelfView *_containerView;
    NSIndexPath *_focusedIndexPath;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) VUIShelfView *containerView;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic, readonly) long long gridStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithGridStyle:(long long)arg1;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;
- (void)_snapTargetContentOffset:(inout struct CGPoint *)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint)arg3;
- (void)updateContentOffsetWithTransitionCoordinator:(id)arg1;
- (void)_updateCollectionViewLayout:(_Bool)arg1;

@end
