/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout

{
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    NSDictionary *_decorationAttributes;
    NSDictionary *_footerAttributes;
}

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (retain, nonatomic) NSDictionary *decorationAttributes;
@property (retain, nonatomic) NSDictionary *footerAttributes;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)applyDefaults;

@end
