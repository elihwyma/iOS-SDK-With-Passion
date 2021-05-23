/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout

{
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    struct CGSize _headerSize;
    double _horizontalPadding;
    double _verticalPadding;
    _Bool _backfills;
}

@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;
@property (nonatomic) _Bool backfills;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
