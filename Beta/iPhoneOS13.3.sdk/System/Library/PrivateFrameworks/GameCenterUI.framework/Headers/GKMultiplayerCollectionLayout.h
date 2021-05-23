/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

@interface GKMultiplayerCollectionLayout : UICollectionViewLayout

{
    _Bool _isPortrait;
    double _headerGap;
    double _footerGap;
    long long _numberOfColumnsInPortrait;
    NSDictionary *_cellLayoutInfo;
    struct CGSize _itemSize;
    struct CGSize _separatorSize;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct CGPoint _itemMargin;
    struct CGSize _landscapeItemSize;
    struct UIEdgeInsets _insets;
}

@property (retain, nonatomic) NSDictionary *cellLayoutInfo;
@property (nonatomic) struct CGSize landscapeItemSize;
@property (nonatomic) struct UIEdgeInsets insets;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize separatorSize;
@property (nonatomic) struct CGSize headerSize;
@property (nonatomic) struct CGSize footerSize;
@property (nonatomic) struct CGPoint itemMargin;
@property (nonatomic) double headerGap;
@property (nonatomic) double footerGap;
@property (nonatomic) long long numberOfColumnsInPortrait;
@property (nonatomic) _Bool isPortrait;

- (id)init;
- (void)dealloc;
- (long long)numberOfColumns;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)currentItemSize;
- (struct CGSize)totalCellSize;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;

@end
