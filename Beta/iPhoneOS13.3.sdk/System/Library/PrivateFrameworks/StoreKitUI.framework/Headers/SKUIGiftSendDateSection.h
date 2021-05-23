/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSDate, NSString, SKUIGiftTableSectionHeaderView, SKUIItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection

{
    NSString *_dateString;
    SKUIItem *_giftItem;
    struct UIEdgeInsets _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
    NSDate *_sendDate;
    long long _sendDateStyle;
}

@property (retain, nonatomic) SKUIItem *giftItem;
@property (nonatomic) struct UIEdgeInsets headerInsets;
@property (copy, nonatomic) NSDate *sendDate;
@property (nonatomic) long long sendDateStyle;

- (id)_headerView;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forTransitionToSize:(struct CGSize)arg2;
- (id)headerViewForTableView:(id)arg1;
- (void)_createFormattedDateString:(_Bool)arg1;

@end
