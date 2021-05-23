/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

@class CALayer, NSHashTable, NSMapTable, NSString, SKUIBackgroundImageWrapperForHorizontalLockup, SKUICardLayout, SKUICardViewElement, SKUISizeValue, SKUIViewElement, UIView;

@protocol SKUIPerspectiveView;

__attribute__((visibility("hidden")))
@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell

{
    NSHashTable *_artworkRelatedChildViewElementViews;
    id <SKUIPerspectiveView> _backgroundViewWithParallax;
    SKUIBackgroundImageWrapperForHorizontalLockup *_backgroundWrapper;
    SKUICardViewElement *_cardElement;
    _Bool _hasBottomAlignedItems;
    NSMapTable *_imageViewToImageResourceCacheKey;
    _Bool _isActivityCard;
    SKUICardLayout *_layout;
    UIView *_programmedCardBackgroundView;
    SKUIViewElement *_productImageElement;
    NSMapTable *_viewElements;
    SKUISizeValue *_artworkBoundingSize;
    UIView *_adCardBackgroundView;
    CALayer *_compactAdCardHairlineLayer;
}

@property (retain, nonatomic) UIView *adCardBackgroundView;
@property (retain, nonatomic) CALayer *compactAdCardHairlineLayer;
@property (copy, nonatomic) SKUISizeValue *artworkBoundingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *lineItem;
@property (nonatomic, readonly) NSString *impressionIdentifier;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
+ (double)_defaultWidthForLockupWithContext:(id)arg1;
+ (struct CGSize)artworkBoundingSizeWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)_imageTapAction:(id)arg1;
- (double)_dividerHeight:(id)arg1;
- (void)_performDefaultActionForViewElement:(id)arg1;
- (void)skuiadvertising_advertSelectionEventShouldBeForwarded:(id)arg1;

@end
