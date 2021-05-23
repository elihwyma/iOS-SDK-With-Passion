/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSMapTable, NSMutableArray, NSNumber, NSString, UIButton;

@protocol SKUIOfferViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOfferView : SKUIViewReuseView

{
    _Bool _showingConfirmation;
    _Bool _compactModeEnabled;
    id <SKUIOfferViewDelegate> _delegate;
    long long _metadataPosition;
    unsigned long long _alignment;
    NSMapTable *_buttonElements;
    NSMapTable *_buyButtonDescriptorToButton;
    NSMapTable *_notices;
    UIButton *_hlsPlayButton;
    NSNumber *_hlsID;
    NSMutableArray *_metadataViews;
    NSMutableArray *_offerButtonViews;
}

@property (nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation;
@property (nonatomic, getter=isCompactModeEnabled) _Bool compactModeEnabled;
@property (nonatomic) unsigned long long alignment;
@property (retain, nonatomic) NSMapTable *buttonElements;
@property (retain, nonatomic) NSMapTable *buyButtonDescriptorToButton;
@property (retain, nonatomic) NSMapTable *notices;
@property (retain, nonatomic) UIButton *hlsPlayButton;
@property (retain, nonatomic) NSNumber *hlsID;
@property (retain, nonatomic) NSMutableArray *metadataViews;
@property (retain, nonatomic) NSMutableArray *offerButtonViews;
@property (weak, nonatomic) id <SKUIOfferViewDelegate> delegate;
@property (nonatomic) long long metadataPosition;
@property (nonatomic, readonly) NSString *offerViewStateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_sendWillAnimate;
- (_Bool)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2;

@end
