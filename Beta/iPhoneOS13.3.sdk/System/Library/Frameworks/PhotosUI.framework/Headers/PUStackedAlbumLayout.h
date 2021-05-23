/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumLayout : UICollectionViewLayout

{
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
    _Bool _isInteractive;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    NSArray *_visibleStackedItemLayoutAttributes;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    double _yAdjust;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    struct CGPoint _referenceCenter;
    struct CGSize _contentSizeAdjust;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes;
@property (copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes;
@property (copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes;
@property (nonatomic) struct CGPoint referenceCenter;
@property (nonatomic) double yAdjust;
@property (nonatomic) struct CGSize contentSizeAdjust;
@property (retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic, setter=setInteractive:) _Bool isInteractive;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (long long)zIndexForItemAtIndexPath:(id)arg1;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;

@end
