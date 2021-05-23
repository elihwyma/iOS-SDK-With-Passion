/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView

{
    UICollectionViewLayoutAttributes *_layoutAttributes;
    UICollectionView *_collectionView;
    long long _updateAnimationCount;
    _Bool _shouldConstrainWidth;
    _Bool _shouldConstrainHeight;
    struct {
        unsigned int wasDequeued:1;
        unsigned int preferredAttributesValid:1;
        unsigned int generatingPreferredAttributes:1;
        unsigned int didSetMaskedCorners:1;
        unsigned int isBeingReused:1;
    } _reusableViewFlags;
    _Bool _preferredAttributesValid;
    NSString *_reuseIdentifier;
}

@property (copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
@property (copy, nonatomic, setter=_setReuseIdentifier:) NSString *reuseIdentifier;
@property (weak, nonatomic, getter=_collectionView, setter=_setCollectionView:) UICollectionView *collectionView;
@property (nonatomic, readonly, getter=_isInUpdateAnimation) _Bool inUpdateAnimation;
@property (nonatomic, getter=_shouldConstrainWidth, setter=_setShouldConstrainWidth:) _Bool shouldConstrainWidth;
@property (nonatomic, getter=_shouldConstrainHeight, setter=_setShouldConstrainHeight:) _Bool shouldConstrainHeight;
@property (nonatomic, getter=_isBeingReused, setter=_setIsBeingReused:) _Bool isBeingReused;
@property (nonatomic, getter=_arePreferredAttributesValid) _Bool preferredAttributesValid;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (_Bool)isEditing;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (_Bool)canBeEdited;
- (void)setEditing:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (_Bool)_disableRasterizeInAnimations;
- (_Bool)_wasDequeued;
- (void)_invalidatePreferredAttributes;
- (void)_markAsDequeued;
- (void)_addUpdateAnimation;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)_clearUpdateAnimation;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;

@end
