/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class SKUIItemBrowseCellLayout;

@interface SKUIItemRoomTableViewCell : SKUIItemTableViewCell

{
    SKUIItemBrowseCellLayout *_layout;
}

@property (nonatomic, readonly) SKUIItemBrowseCellLayout *layout;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;

@end
