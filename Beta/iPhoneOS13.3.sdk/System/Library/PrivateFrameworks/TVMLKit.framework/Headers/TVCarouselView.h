/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

#import <TVMLKit/Swift-Protocol.h>

@class CADisplayLink, NSArray, NSDate, NSDictionary, NSIndexPath, NSObject, NSString, _TVCarouselCollectionView;

@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;

@interface TVCarouselView : UIView <Swift>

{
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    _TVCarouselCollectionView *_collectionView;
    unsigned long long _indexToDeque;
    NSIndexPath *_focusedIndexPath;
    unsigned long long _numberOfRealItemsForDataSource;
    double _originalSelectionDuration;
    double _originalUnselectionDuration;
    long long _numFocusChangesInInterval;
    id <TVCarouselViewDataSource> _dataSource;
    id <TVCarouselViewDelegate> _delegate;
    double _interitemSpacing;
    unsigned long long _scrollMode;
    double _autoScrollInterval;
    double _continuousScrollVelocity;
    NSDictionary *_collectionToDatasourceIndexMap;
    CADisplayLink *_displayLink;
    double _previousDisplayLinkTimestamp;
    double _offsetChangePerSecond;
    NSDate *_firstFocusChangeInInterval;
    struct CGSize _itemSize;
    struct CGPoint _focusDirection;
    struct CGPoint _targetContentOffset;
}

@property (retain, nonatomic) NSDictionary *collectionToDatasourceIndexMap;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double previousDisplayLinkTimestamp;
@property (nonatomic) struct CGPoint targetContentOffset;
@property (nonatomic) double offsetChangePerSecond;
@property (retain, nonatomic) NSDate *firstFocusChangeInInterval;
@property (weak, nonatomic) id <TVCarouselViewDataSource> dataSource;
@property (weak, nonatomic) id <TVCarouselViewDelegate> delegate;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic) double autoScrollInterval;
@property (nonatomic) double continuousScrollVelocity;
@property (copy, nonatomic, readonly) NSArray *visibleCells;
@property (nonatomic) struct CGPoint focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)_collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)focusedCell;
- (void)displayLinkDidFire:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_updateCollectionViewLayout;
- (long long)_numberOfCells;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2;
- (unsigned long long)indexForCell:(id)arg1;
- (void)_handlePlayGesture:(id)arg1;
- (long long)_centerCollectionViewCellIndex;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1;
- (double)_contentOffsetXForCollectionViewIndex:(long long)arg1;
- (void)_stopContinuousScroll;
- (_Bool)_canScrollCarouselView;
- (void)_adjustCarouselForDirectionShift:(long long)arg1;
- (void)_prepareIndexMap:(long long)arg1;
- (void)_updateAutoScrollTimer;
- (void)_updateIdleModeLayoutAttributes;
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)_cellForItemAtIndex:(unsigned long long)arg1;
- (void)setInteritemSpacing:(double)arg1 animated:(_Bool)arg2;
- (void)_updateCollectionViewLayoutAnimated:(_Bool)arg1;
- (void)_updateCarouselWithCenterIndex:(long long)arg1 indexToRemove:(long long)arg2 indexToAdd:(long long)arg3;
- (void)_startAutoScrollTimer;
- (void)_startContinuousScroll;
- (void)_stopAutoScrollTimer;

@end
