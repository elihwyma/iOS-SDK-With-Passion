/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, SKUIColorScheme, SKUIContentRatingArtworkResourceLoader, SKUIItemContentRating, SKUIItemOffer, SKUIItemOfferButton, SKUIItemState, SKUIProductPageHeaderLabel, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderView : UIView

{
    UILabel *_ageBandLabel;
    UIButton *_artistButton;
    SKUIBadgeLabel *_editorialBadgeLabel;
    SKUIClientContext *_clientContext;
    SKUIItemContentRating *_contentRating;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIColorScheme *_colorScheme;
    double _headerImageHeight;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    SKUIItemState *_itemState;
    _Bool _needsLayoutAfterButtonAnimation;
    long long _numberOfUserRatings;
    _Bool _restricted;
    SKUIItemContentRating *_secondaryContentRating;
    UIButton *_shareButton;
    SKUIProductPageHeaderLabel *_titleLabel;
    double _userRating;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *inAppPurchasesString;
@property (copy, nonatomic) NSString *editorialBadge;
@property (nonatomic, readonly) UIControl *artistButton;
@property (retain, nonatomic) SKUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader;
@property (retain, nonatomic) SKUIItemContentRating *contentRating;
@property (retain, nonatomic) SKUIItemContentRating *secondaryContentRating;
@property (copy, nonatomic) NSString *ageBandString;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) double headerImageHeight;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, readonly) UIControl *shareButton;
@property (retain, nonatomic) SKUIItemOffer *itemOffer;
@property (nonatomic, readonly) SKUIItemOfferButton *itemOfferButton;
@property (copy, nonatomic) NSString *itemOfferExplanationText;
@property (copy, nonatomic) NSString *itemOfferExplanationTitle;
@property (nonatomic, getter=isRestricted) _Bool restricted;
@property (copy, nonatomic) SKUIItemState *itemState;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithClientContext:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)_reloadItemOfferButton:(_Bool)arg1;
- (id)contentRatingName;
- (void)_getTopLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;
- (void)_getBottomLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;
- (void)_finishButtonAnimation;

@end
