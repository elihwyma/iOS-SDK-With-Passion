/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray, NSMapTable, NSString, SKUIAttributedStringView, SKUIStackItemViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIStackItemView : SKUIViewReuseView

{
    SKUIStackItemViewElement *_viewElement;
    SKUIViewElementLayoutContext *_lastContext;
    SKUIAttributedStringView *_textView;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) SKUIStackItemViewElement *viewElement;
@property (retain, nonatomic) SKUIViewElementLayoutContext *lastContext;
@property (retain, nonatomic) SKUIAttributedStringView *textView;
@property (copy, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) NSMapTable *imageViewToImageResourceCacheKey;
@property (nonatomic, readonly) unsigned long long numberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 numberOfLines:(unsigned long long *)arg4;
+ (id)_textViewLayoutWithWidth:(double)arg1 string:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
