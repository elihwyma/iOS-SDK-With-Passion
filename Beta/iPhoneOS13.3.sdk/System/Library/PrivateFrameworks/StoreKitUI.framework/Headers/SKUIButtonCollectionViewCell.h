/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

@class IKViewElementStyle, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIButtonCollectionViewCell : SKUIViewReuseCollectionViewCell

{
    UIControl *_button;
    id _buttonImageResourceCacheKey;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    SKUIButtonViewElement *_viewElement;
    IKViewElementStyle *_viewElementStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (_Bool)_usesBackgroundWithAlpha;

@end
