/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTCenteringCollectionViewDelegate, AVTGroupDialMaskingView, AVTUIEnvironment, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;

@protocol AVTGroupDialDelegate;

@interface AVTGroupDial : UIView <Swift>

{
    _Bool _isMoving;
    _Bool _hasFinalizedSelection;
    id <AVTGroupDialDelegate> _delegate;
    AVTUIEnvironment *_environment;
    NSArray *_groupTitles;
    NSArray *_cachedGroupTitleSizes;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringCollectionViewDelegate;
    unsigned long long _currentScrollDirection;
    long long _currentSelectedItemIndex;
    AVTGroupDialMaskingView *_maskingView;
    NSIndexPath *_shimmeringItemIndexPath;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) NSArray *groupTitles;
@property (nonatomic, readonly) NSArray *cachedGroupTitleSizes;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (nonatomic) long long currentSelectedItemIndex;
@property (nonatomic) _Bool isMoving;
@property (nonatomic) _Bool hasFinalizedSelection;
@property (retain, nonatomic) AVTGroupDialMaskingView *maskingView;
@property (nonatomic) NSIndexPath *shimmeringItemIndexPath;
@property (weak, nonatomic) id <AVTGroupDialDelegate> delegate;
@property (nonatomic) long long selectedGroupIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)estimatedContentWidthForTitleSizes:(id)arg1;
+ (_Bool)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setContentPadding:(double)arg1;
- (void)cacheTitleSizes;
- (void)setupDial;
- (void)setupMasking;
- (struct CGSize)cellSizeForItemAtIndex:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1 updateScrollPosition:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)stopDiscoverability;
- (void)updateSelectedState:(_Bool)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)updateForEndingScroll;
- (id)initWithGroupTitles:(id)arg1 environment:(id)arg2;
- (void)startDiscoverability;

@end
