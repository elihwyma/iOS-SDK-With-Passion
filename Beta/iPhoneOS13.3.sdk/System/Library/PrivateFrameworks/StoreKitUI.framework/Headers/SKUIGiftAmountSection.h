/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGiftAmountControl, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmountSection : SKUIGiftTableViewSection

{
    SKUIGiftAmountControl *_amountControl;
}

@property (nonatomic, readonly) UIControl *amountControl;
@property (nonatomic, readonly) long long selectedAmount;
@property (nonatomic, readonly) NSString *selectedAmountString;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;

@end
