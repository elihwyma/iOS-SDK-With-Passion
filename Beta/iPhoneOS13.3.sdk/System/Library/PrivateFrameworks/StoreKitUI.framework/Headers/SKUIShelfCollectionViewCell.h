/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell

{
    UICollectionView *_collectionView;
    struct UIEdgeInsets _contentInset;
    _Bool _rendersWithPerspective;
    _Bool _rendersWithParallax;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) _Bool rendersWithPerspective;
@property (nonatomic) _Bool rendersWithParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
