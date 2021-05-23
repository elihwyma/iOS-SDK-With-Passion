/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSString, SKUIAttributedStringView, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorView : SKUIViewReuseView

{
    unsigned long long _alignment;
    _Bool _animating;
    struct UIEdgeInsets _contentInset;
    UIImageView *_imageView;
    UIActivityIndicatorView *_indicatorView;
    SKUIAttributedStringView *_stringView;
    double _period;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)_activityIndicatorSize;

- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_isAnimating;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_updateSpinnerAnimation;

@end
