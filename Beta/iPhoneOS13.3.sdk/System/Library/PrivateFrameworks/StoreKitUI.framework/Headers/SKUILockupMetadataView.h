/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupMetadataView : UIView

{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIClientContext *_clientContext;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    long long _numberOfUserRatings;
    UILabel *_releaseDateLabel;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    unsigned long long _visibleFields;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) unsigned long long visibleFields;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *categoryString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *itemOfferString;
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (nonatomic, readonly) UIColor *primaryTextColor;

+ (double)maximumHeightWithVisibleFields:(unsigned long long)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)_newDefaultLabel;
- (void)_reloadUserRatingViews;
- (id)_decimalNumberFormatter;

@end
