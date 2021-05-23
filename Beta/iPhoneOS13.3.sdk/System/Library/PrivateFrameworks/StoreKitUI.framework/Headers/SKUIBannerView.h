/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIItemState, SSLookupItemOffer, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIBannerView : UIView

{
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    SSLookupItemOffer *_itemOffer;
    UIButton *_itemOfferButton;
    SKUIItemState *_itemState;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingStarImageView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSArray *screenshotImages;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating;
@property (retain, nonatomic) SSLookupItemOffer *itemOffer;
@property (retain, nonatomic) SKUIItemState *itemState;
@property (nonatomic, readonly) UIControl *closeButton;
@property (nonatomic, readonly) UIControl *itemOfferButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_newDefaultLabel;
- (void)_reloadItemState;

@end
