/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class NSDictionary, NSIndexPath, REUpNextCollectionViewFlowLayoutAttributes;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout

{
    REUpNextCollectionViewFlowLayoutAttributes *_preferedCellAttributes;
    NSDictionary *_allAttributes;
    NSIndexPath *_preferedIndexPath;
}

@property (retain, nonatomic) NSIndexPath *preferedIndexPath;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
