/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIToolbar.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, _UIBackdropView;

@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewScrubber : UIToolbar <Swift>

{
    _Bool __ignoreScrollViewDidScrollUpdate;
    _Bool __performingInteractiveUpdate;
    id <PUReviewScrubberDataSource> _dataSource;
    id <PUReviewScrubberDelegate> _scrubberDelegate;
    NSIndexPath *_selectedIndexPath;
    Class _scrubberCellClass;
    _UIBackdropView *__backdropView;
    UIImageView *__shadowView;
    UIImageView *__arrowImageView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    NSString *_cellReuseIdentifier;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIImpactFeedbackGenerator *__impactFeedbackBehavior;
    NSIndexPath *__indexPathForPreviousFeedbackQuery;
}

@property (nonatomic, readonly) _UIBackdropView *_backdropView;
@property (nonatomic, readonly) UIImageView *_shadowView;
@property (nonatomic, readonly) UIImageView *_arrowImageView;
@property (nonatomic, readonly) PUHorizontalCollectionViewLayout *_collectionViewLayout;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (retain, nonatomic) NSString *cellReuseIdentifier;
@property (nonatomic, readonly) _Bool _ignoreScrollViewDidScrollUpdate;
@property (nonatomic, readonly) _Bool _performingInteractiveUpdate;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *_impactFeedbackBehavior;
@property (retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery;
@property (nonatomic) id <PUReviewScrubberDataSource> dataSource;
@property (nonatomic) id <PUReviewScrubberDelegate> scrubberDelegate;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) Class scrubberCellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isMinibar;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (void)_commonPUReviewScrubberInitialization;
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)toggleIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)toggleSelectedIndexPathAnimated:(_Bool)arg1;
- (void)reloadIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSelectedIndexPathAnimated:(_Bool)arg1;
- (void)beginInteractiveUpdate;
- (void)updateWithAbsoluteProgress:(double)arg1;
- (void)finishInteractiveUpdate;
- (void)_beginFeedbackInteraction;
- (void)_playFeedbackIfNeeded;
- (void)_endFeedbackInteraction;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(_Bool)arg1;
- (id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (struct CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2;
- (void)_updateToSelectedIndexPath:(id)arg1;
- (void)_notifyDelegateOfScrub;
- (void)_notifyDelegateOfSelection;

@end
