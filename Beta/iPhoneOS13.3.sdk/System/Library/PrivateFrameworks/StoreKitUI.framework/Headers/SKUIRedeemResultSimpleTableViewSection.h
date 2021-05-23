/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewSection.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultSimpleTableViewSection : SKUITableViewSection

{
    struct UIEdgeInsets _contentInsets;
    UIView *_view;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;

- (id)initWithView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;

@end
