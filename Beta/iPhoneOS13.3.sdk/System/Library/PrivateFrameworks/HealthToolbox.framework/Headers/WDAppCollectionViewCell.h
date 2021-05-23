/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDAppCollectionViewCell : UICollectionViewCell

{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    unsigned long long _displayMode;
    UIImageView *_icon;
    NSLayoutConstraint *_iconTopConstraint;
    NSLayoutConstraint *_priceLabelToBottomConstraint;
    NSDictionary *_storeData;
}

@property (retain, nonatomic) NSDictionary *storeData;

+ (id)reuseIdentifier;
+ (double)_topToIconHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)_priceToBottomHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)heightWithIconSize:(struct CGSize)arg1 displayMode:(unsigned long long)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;

@end
