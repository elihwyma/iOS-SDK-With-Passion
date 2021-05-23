/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

@class NSMutableArray, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, SKUITracklistColumnData, UIControl, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistSectionHeaderCollectionViewCell : SKUIViewReuseCollectionViewCell

{
    UIControl *_button;
    SKUIButtonViewElement *_buttonViewElement;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    SKUITracklistColumnData *_columnData;
    NSMutableArray *_labels;
    UIView *_separatorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (double)_titlesWidthForWidth:(double)arg1 columnData:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;

@end
