/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@protocol PUCollectionViewLayoutProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutCache : UICollectionViewLayout

{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    id <PUCollectionViewLayoutProvider> _layoutProvider;
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;
    _Bool _cachesResults;
}

@property (weak, nonatomic, readonly) id <PUCollectionViewLayoutProvider> layoutProvider;
@property (nonatomic) _Bool cachesResults;

- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)initWithProvider:(id)arg1;
- (void)invalidateLayoutCache;

@end
