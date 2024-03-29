/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSString, SKUIAttributedStringView, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableView : SKUIViewReuseView

{
    UIControl *_button;
    SKUIButtonViewElement *_buttonElement;
    struct UIEdgeInsets _contentInset;
    SKUIImageView *_imageView;
    SKUIImageViewElement *_imageElement;
    SKUIAttributedStringView *_messageView;
    SKUIAttributedStringView *_titleView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;

- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (double)_firstBaselineOffsetForView:(id)arg1;
- (double)_baselineOffsetForView:(id)arg1;

@end
