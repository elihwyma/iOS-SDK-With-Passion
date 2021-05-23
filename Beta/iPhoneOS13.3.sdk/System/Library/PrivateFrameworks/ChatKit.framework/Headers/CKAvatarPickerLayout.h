/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSValue, UICollectionViewLayoutAttributes;

@protocol CKAvatarPickerLayoutDelegate;

@interface CKAvatarPickerLayout : UICollectionViewLayout

{
    _Bool _isInEditingMode;
    unsigned long long _layoutMode;
    id <CKAvatarPickerLayoutDelegate> _delegate;
    UICollectionViewLayoutAttributes *_titleSupplementaryAttr;
    NSArray *_attrCollection;
    NSArray *_supplementaryAttrCollection;
    NSArray *_cutoutAttrCollection;
    UICollectionViewLayoutAttributes *_leftShadowDecorationAttr;
    UICollectionViewLayoutAttributes *_rightShadowDecorationAttr;
    NSValue *_editingFrameValue;
}

@property (copy, nonatomic) NSArray *attrCollection;
@property (copy, nonatomic) NSArray *supplementaryAttrCollection;
@property (copy, nonatomic) NSArray *cutoutAttrCollection;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr;
@property (nonatomic) _Bool isInEditingMode;
@property (copy, nonatomic) NSValue *editingFrameValue;
@property (nonatomic) unsigned long long layoutMode;
@property (weak, nonatomic) id <CKAvatarPickerLayoutDelegate> delegate;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)_itemCount;
- (void)invalidateLayoutAndCache;
- (id)initWithLayoutMode:(unsigned long long)arg1;
- (double)_avatarBoundWidthLayoutMode:(unsigned long long)arg1;
- (_Bool)_shouldShowContactNames;
- (_Bool)_canShowShadowClipping;
- (void)_setupBannerLayout;
- (void)_setupPancakeLayout;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint)arg1;
- (double)_avatarBoundWidth;

@end
