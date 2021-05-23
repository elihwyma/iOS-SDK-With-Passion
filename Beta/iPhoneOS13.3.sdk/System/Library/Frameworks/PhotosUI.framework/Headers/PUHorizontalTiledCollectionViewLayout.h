/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class PUCollectionViewData, UICollectionViewLayoutAttributes;

@protocol PUHorizontalTiledCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout

{
    PUCollectionViewData *_data;
    UICollectionViewLayoutAttributes *_dummyAttrs;
    double _interitemSpacing;
    id <PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;
    struct UIEdgeInsets _itemsContentInset;
}

@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets itemsContentInset;
@property (weak, nonatomic) id <PUHorizontalTiledCollectionViewLayoutDelegate> delegate;
@property (nonatomic, readonly) _Bool hasReferenceIndexPath;

+ (Class)invalidationContextClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateCachedLayout;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double *)arg3;
- (void)_ensureRect:(struct CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double *)arg3;
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;

@end
