/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUICellImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _SKUIItemBrowseCellContentView : UIView

{
    UILabel *_indexNumberLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UILabel *_userRatingLabel;
    SKUICellImageView *_userRatingImageView;
}

@property (retain, nonatomic) UILabel *indexNumberLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *userRatingLabel;
@property (retain, nonatomic) SKUICellImageView *userRatingImageView;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
