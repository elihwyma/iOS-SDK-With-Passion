/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftFooterLabelTableViewCell : UITableViewCell

{
    UILabel *_footerLabel;
}

@property (copy, nonatomic) NSString *footerLabel;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
