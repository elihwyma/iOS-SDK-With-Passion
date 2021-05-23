/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSArray, NSNumberFormatter, SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void)setExpanded:(_Bool)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;
- (void)_reloadHeaderView;

@end
