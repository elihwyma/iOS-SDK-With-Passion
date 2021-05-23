/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@protocol PUHorizontalCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout

{
    struct CGSize _contentSize;
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    struct CGRect _lastRequestedRect;
    NSArray *_lastRequestedLayoutAttributesInRect;
    double _interitemSpacing;
    id <PUHorizontalCollectionViewLayoutDelegate> _delegate;
    struct CGSize _itemSize;
    struct UIEdgeInsets _itemsContentInset;
}

@property (nonatomic, readonly) struct CGRect collectionViewBounds;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets itemsContentInset;
@property (weak, nonatomic) id <PUHorizontalCollectionViewLayoutDelegate> delegate;

+ (Class)invalidationContextClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;

@end
