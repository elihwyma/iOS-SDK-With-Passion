/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSMapTable, NSString, SKUIAttributedStringView, SKUITextBoxView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIResponseView : SKUIViewReuseView

{
    SKUITextBoxView *_descriptionView;
    SKUIAttributedStringView *_subtitleView;
    UIImageView *_replyImageView;
    NSMapTable *_allViewTextProperties;
    struct UIEdgeInsets _contentInset;
}

@property (retain, nonatomic) SKUITextBoxView *descriptionView;
@property (retain, nonatomic) SKUIAttributedStringView *subtitleView;
@property (retain, nonatomic) UIImageView *replyImageView;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) NSMapTable *allViewTextProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForSubtitleLabel:(id)arg1 context:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
