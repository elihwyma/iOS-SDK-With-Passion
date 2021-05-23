/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout

{
    NSArray *_minifiedAttributes;
    NSArray *_magnifiedAttributes;
    NSArray *_supplementryMinifiedAttributes;
    NSArray *_supplementryMagnifiedAttributes;
    _Bool _inLayoutModeTransition;
    _Bool _shouldDimPluginCells;
    _Bool _shouldShowCellBorders;
    unsigned long long _layoutMode;
}

@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) _Bool shouldDimPluginCells;
@property (nonatomic) _Bool shouldShowCellBorders;

+ (double)minHeight;
+ (double)maxHeight;

- (id)init;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)_itemCount;
- (id)_currentAttributes;
- (struct CGSize)collectionViewContentSizeForLayoutMode:(unsigned long long)arg1;
- (void)prepareForLayoutModeTransition;
- (void)finishLayoutModeTransition;
- (void)invalidateCachedLayout;
- (struct _Spec)_specForLayoutMode:(unsigned long long)arg1;
- (long long)_favoritesCount;
- (long long)_recentsCount;
- (id)_attributesForLayoutMode:(unsigned long long)arg1;
- (id)_supplementryAttributesForLayoutMode:(unsigned long long)arg1;
- (id)_generateAttributesForSpec:(struct _Spec)arg1;
- (id)_generateSupplementryAttributesForSpec:(struct _Spec)arg1 minified:(_Bool)arg2;
- (id)_currentSupplementryAttributes;

@end
