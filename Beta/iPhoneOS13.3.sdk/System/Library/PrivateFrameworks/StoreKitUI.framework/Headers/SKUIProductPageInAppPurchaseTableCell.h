/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell

{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic) NSString *indexString;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *productName;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

@end
