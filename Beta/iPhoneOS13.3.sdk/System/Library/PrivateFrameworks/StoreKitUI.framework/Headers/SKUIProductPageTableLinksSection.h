/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIColorScheme, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection

{
    NSMutableArray *_actions;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
    SKUIColorScheme *_colorScheme;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(_Bool)arg3;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;

@end
