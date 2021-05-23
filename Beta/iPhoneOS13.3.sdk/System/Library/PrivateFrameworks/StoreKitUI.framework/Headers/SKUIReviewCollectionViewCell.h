/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

@class NSString, SKUIResponseView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIReviewCollectionViewCell : SKUIViewReuseCollectionViewCell

{
    CDUnknownBlockType _descriptionTapAction;
    CDUnknownBlockType _responseDescriptionTapAction;
    SKUITextBoxView *_descriptionView;
    SKUIResponseView *_responseView;
}

@property (retain, nonatomic) SKUITextBoxView *descriptionView;
@property (retain, nonatomic) SKUIResponseView *responseView;
@property (copy, nonatomic) CDUnknownBlockType descriptionTapAction;
@property (copy, nonatomic) CDUnknownBlockType responseDescriptionTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_resetTapGestures;
- (void)contentViewTapped:(id)arg1;

@end
