/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSString, SKUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SKUIReviewListTitleView : SKUIViewReuseView

{
    SKUIAttributedStringView *_titleView;
    SKUIAttributedStringView *_dateView;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) SKUIAttributedStringView *titleView;
@property (retain, nonatomic) SKUIAttributedStringView *dateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_dateLabelForViewElement:(id)arg1;
+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;
+ (id)_textLabelForViewElement:(id)arg1;
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
