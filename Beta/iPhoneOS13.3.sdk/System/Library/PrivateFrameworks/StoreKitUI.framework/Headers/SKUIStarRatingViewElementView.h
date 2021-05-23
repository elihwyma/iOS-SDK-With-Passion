/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIAttributedStringLayout, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingViewElementView : UIView

{
    struct UIEdgeInsets _contentInset;
    long long _elementSpacing;
    UIImage *_starRatingImage;
    SKUIAttributedStringLayout *_textLayout;
}

@property (nonatomic) long long elementSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_attributedStringWithViewElement:(id)arg1 context:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
