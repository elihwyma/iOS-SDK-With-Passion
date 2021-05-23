/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemCell : UICollectionViewCell

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_borderView;
    UIView *_topBorderView;
    UIImageView *_decorationImageView;
    UIImage *_decorationImage;
    _Bool _showTopBorder;
    _Bool _hasBlueBackgroundWhenSelected;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *decorationImage;
@property (nonatomic) _Bool showTopBorder;
@property (nonatomic) _Bool hasBlueBackgroundWhenSelected;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_reloadHighlightState;

@end
