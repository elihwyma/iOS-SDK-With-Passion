/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSString, SKUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout

{
    struct CGSize _cachedCollectionViewContentSize;
    NSMutableDictionary *_cachedLayoutAttributes;
    _Bool _invalidateGeometryOnlyOfExistingLayoutAttributes;
    SKUIShelfLayoutData *_layoutData;
    double _focusedItemHorizontalCenterOffset;
    double _interItemSpacing;
    double _itemWidth;
    double _scaledItemWidth;
}

@property (nonatomic) double focusedItemHorizontalCenterOffset;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic) double scaledItemWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SKUIShelfLayoutData *layoutData;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (double)snapToBoundariesDecelerationRate;
+ (_Bool)collectionViewCanClipToBounds;

- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)menuBarFocusedItemIndexPathWithTransitionProgress:(double *)arg1;
- (void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(double)arg2;

@end
