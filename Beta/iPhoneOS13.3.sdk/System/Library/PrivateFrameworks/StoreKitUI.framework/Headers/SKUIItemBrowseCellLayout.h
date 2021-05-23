/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, _SKUIItemBrowseCellContentView;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout

{
    _SKUIItemBrowseCellContentView *_cellContentView;
    struct CGSize _imageBoundingSize;
    _Bool _largeSpacing;
    long long _numberOfUserRatings;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    double _userRating;
}

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *indexNumberString;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isLargeSpacing) _Bool largeSpacing;
@property (nonatomic) struct CGSize imageBoundingSize;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_reloadUserRatingViews;
- (id)_decimalNumberFormatter;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)layoutForItemOfferChange;
- (void)_initSKUIItemBrowseCellLayout;

@end
