/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout

{
    NSDictionary *_layoutAttributesByIndexPath;
}

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (long long)_expectedNumberOfCells;

@end
