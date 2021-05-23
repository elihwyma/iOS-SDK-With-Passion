/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, PUPhotoDecoration, UIColor, UIImage, UIImageView;

@interface PUStackView : UIView

{
    struct CGAffineTransform _transforms[9];
    UIImageView *_combinedPhotoDecorationImageView;
    _Bool _imageHidden[9];
    _Bool _needsDynamicLayout;
    _Bool _combinesPhotoDecorations;
    _Bool _hasRoundedCorners;
    _Bool _empty;
    _Bool _highlighted;
    unsigned long long _style;
    PUPhotoDecoration *_photoDecoration;
    UIColor *_gridBackgroundColor;
    double _gridMargin;
    double _gridItemSpacing;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    long long _numberOfVisibleItems;
    double _itemAlpha;
    UIImage *_emptyPlaceholderImage;
    long long __numberOfViews;
    NSArray *__photoViews;
    NSPointerArray *__imageSizes;
    NSArray *__photoDecorationVariants;
    UIView *__backgroundView;
    UIColor *_cornersBackgroundColor;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGPoint _stackPerspectiveFactor;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

@property (nonatomic, readonly) long long _numberOfViews;
@property (nonatomic, readonly) NSArray *_photoViews;
@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (retain, nonatomic) UIColor *cornersBackgroundColor;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) _Bool combinesPhotoDecorations;
@property (nonatomic) struct CGSize stackSize;
@property (nonatomic) struct UIOffset stackOffset;
@property (nonatomic) struct UIEdgeInsets stackPerspectiveInsets;
@property (nonatomic) struct UIOffset stackPerspectiveOffset;
@property (nonatomic) struct CGPoint stackPerspectiveFactor;
@property (retain, nonatomic) UIColor *gridBackgroundColor;
@property (nonatomic) double gridMargin;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) _Bool hasRoundedCorners;
@property (nonatomic, readonly) NSArray *stackItemViews;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic) double itemAlpha;
@property (nonatomic, readonly) struct CGPoint topLeftCornerOfFrontStackItem;
@property (retain, nonatomic) UIImage *emptyPlaceholderImage;
@property (nonatomic, getter=isEmpty) _Bool empty;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1;
+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (void)_updateHighlight;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateSubviewsOrdering;
- (void)setImageHidden:(_Bool)arg1 forItemAtIndex:(long long)arg2;
- (void)setHasRoundedCorners:(_Bool)arg1 withCornersBackgroundColor:(id)arg2;
- (_Bool)isImageHiddenForItemAtIndex:(long long)arg1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo)arg1 forItemAtIndex:(long long)arg2;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo)arg1 style:(long long)arg2 forItemAtIndex:(long long)arg3;
- (struct CGRect)rectOfStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)wouldCoverAllItemsInStackView:(id)arg1;
- (id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(long long)arg2;
- (void)_updateNumberOfViews;
- (void)_updatePhotoViews;
- (void)_rebuildDecorationVariants;
- (struct CGRect)_getStackFrame;
- (void)_getCenter:(struct CGPoint *)arg1 bounds:(struct CGRect *)arg2 forPhotoViewAtIndex:(long long)arg3;
- (id)_combinedPhotoDecorationsImage;
- (void)_setNeedsDynamicLayout;
- (void)_updateDynamicLayout;
- (void)setFeatureSpec:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setCollectionTileLayoutTemplate:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setTitleFontName:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setTitle:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setSubtitle:(id)arg1 forItemAtIndex:(long long)arg2;

@end
