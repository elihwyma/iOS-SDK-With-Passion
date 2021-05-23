/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUStructuredPageTableDataSource.h>

@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource

- (double)heightForFooterInSection:(long long)arg1;
- (long long)tableViewStyle;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)reloadCellContexts;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id *)arg2;
- (id)newHeaderViewForSection:(long long)arg1;
- (_Bool)canShowItemOfferButtonForItem:(id)arg1;
- (id)_subtitleForSectionIndex:(long long)arg1;

@end
