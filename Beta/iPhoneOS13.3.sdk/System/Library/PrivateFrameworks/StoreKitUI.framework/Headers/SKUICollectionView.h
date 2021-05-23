/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionView.h>

@class SKUIIndexBarControl, UICollectionViewLayout, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface SKUICollectionView : UICollectionView

{
    _Bool _delegateWantsWillLayoutSubviews;
    _Bool _externalShowsHorizontalScrollIndicator;
    _Bool _externalShowsVerticalScrollIndicator;
    double _overrideBoundsWidth;
    UICollectionViewLayout *_pendingCollectionViewLayout;
    UIRefreshControl *_refreshControl;
    SKUIIndexBarControl *_indexBarControl;
}

@property (retain, nonatomic) SKUIIndexBarControl *indexBarControl;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic) double overrideBoundsWidth;

- (void)setDelegate:(id)arg1;
- (struct CGRect)bounds;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)collectionViewLayout;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)_updateIndexBarControlFrame;
- (void)_updateShowsScrollIndicators;

@end
