/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewSection.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultLinksTableViewSection : SKUITableViewSection

{
    NSArray *_links;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)initWithLinks:(id)arg1;

@end
