/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class UICollectionViewLayoutAttributes;

@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout

{
    _Bool _enableEdgeDisappearing;
    _Bool _pinHeaderToVisible;
    UICollectionViewLayoutAttributes *_fixedHeaderLayoutAttributes;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *fixedHeaderLayoutAttributes;
@property (nonatomic) _Bool enableEdgeDisappearing;
@property (nonatomic) _Bool pinHeaderToVisible;

- (_Bool)isRTL;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)modifyLayoutAttributes:(id)arg1;

@end
