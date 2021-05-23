/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary, NSIndexSet;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout

{
    _Bool _centersItemsInExcessSpace;
    long long _autoWidthColumns;
    double _extraSectionHeaderToCellSpace;
    NSIndexSet *_sectionsThatShowHeaderWhenEmpty;
    NSIndexSet *_sectionsThatShowFootersWhenEmpty;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    NSDictionary *_footerAttributes;
}

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (retain, nonatomic) NSDictionary *footerAttributes;
@property (nonatomic) _Bool centersItemsInExcessSpace;
@property (nonatomic) long long autoWidthColumns;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowHeaderWhenEmpty;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowFootersWhenEmpty;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)lastValidSection;
- (void)applyDefaults;

@end
