/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UITableViewCell.h>

@class Stock, StocksListBoxView, UIImageView, UILabel, UIView;

@interface StocksListTableViewCell : UITableViewCell

{
    UILabel *_symbolLabel;
    UILabel *_priceLabel;
    UILabel *_boxLabel;
    StocksListBoxView *_boxView;
    UIImageView *_changeSignView;
    UIView *_rowSeparatorView;
    _Bool _shouldStackView;
    Stock *_stock;
    long long _rowDataType;
}

@property (retain, nonatomic) Stock *stock;
@property (nonatomic) long long rowDataType;
@property (nonatomic) _Bool shouldStackView;

+ (double)cellHeightForStackStatus:(_Bool)arg1;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setShowsRowSeparator:(_Bool)arg1;
- (void)setBoxValueFromRowDataType;
- (void)updateValues;
- (id)changeSignNegative:(_Bool)arg1;
- (void)setBoxContentsAlpha:(double)arg1 includeChangeSign:(_Bool)arg2;
- (struct CGRect)changeButtonRect;

@end
