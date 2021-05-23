/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <UIKit/UIView.h>

@class CKDispatchQueue, MSStickerBrowserViewLayoutSpec, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;

@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView

{
    _Bool _isRestoringContentOffset;
    _Bool _animating;
    long long _stickerSize;
    id <MSStickerBrowserViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    MSStickerBrowserViewLayoutSpec *_layoutSpec;
    NSMutableArray *_cellsToAnimate;
    NSTimer *_animationTimer;
    unsigned long long _currentlyAnimatingIndex;
    NSMutableDictionary *_stickerCache;
    CKDispatchQueue *_stickerCacheQueue;
    id <MSStickerBrowserViewDisplayDelegate> _displayDelegate;
    struct CGPoint _restoredContentOffset;
    struct CGSize _browserSizeToRestoreFrom;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec;
@property (retain, nonatomic) NSMutableArray *cellsToAnimate;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) unsigned long long currentlyAnimatingIndex;
@property (nonatomic) struct CGPoint restoredContentOffset;
@property (nonatomic) struct CGSize browserSizeToRestoreFrom;
@property (nonatomic) _Bool isRestoringContentOffset;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (retain, nonatomic) CKDispatchQueue *stickerCacheQueue;
@property (nonatomic) id <MSStickerBrowserViewDisplayDelegate> displayDelegate;
@property (nonatomic, readonly) NSDictionary *stateRestorationInfo;
@property (nonatomic, readonly) long long stickerSize;
@property (weak, nonatomic) id <MSStickerBrowserViewDataSource> dataSource;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didMoveToWindow;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)prepareForSnapshotting;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)invalidateFlowLayout;
- (id)initWithFrame:(struct CGRect)arg1 stickerSize:(long long)arg2;
- (void)restoreFromState:(id)arg1;
- (void)configureStickerView;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)animateNextCell;
- (id)_stickerAtIndexPath:(id)arg1;
- (void)_reloadStickersAtIndexes:(id)arg1;

@end
