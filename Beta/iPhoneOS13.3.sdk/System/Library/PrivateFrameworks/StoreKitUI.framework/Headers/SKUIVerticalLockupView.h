/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSHashTable, NSMapTable, NSString, SKUILockupViewElement, SKUISizeValue, UIView;

__attribute__((visibility("hidden")))
@interface SKUIVerticalLockupView : SKUIViewReuseView

{
    NSHashTable *_artworkRelatedChildViewElementViews;
    struct UIEdgeInsets _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMapTable *_lineSpacings;
    SKUILockupViewElement *_lockupElement;
    double _productImageAdjustedWidth;
    SKUISizeValue *_productImageBoundingSize;
    UIView *_productImageView;
    struct CGAffineTransform _productImageViewOriginalTransform;
    long long _sizingStyle;
    NSMapTable *_topInsets;
    NSMapTable *_viewElementViews;
    double _opacityOfViewsOtherThanProductImageView;
    double _zoomingImageAlpha;
    double _zoomingImageWidth;
}

@property (nonatomic) long long sizingStyle;
@property (nonatomic) double opacityOfViewsOtherThanProductImageView;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
+ (double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;

@end
