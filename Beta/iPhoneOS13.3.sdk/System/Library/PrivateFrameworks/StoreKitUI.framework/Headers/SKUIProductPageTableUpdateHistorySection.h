/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSArray, NSDateFormatter, NSMutableIndexSet, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageTableExpandableHeaderView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection

{
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    long long _firstStringIndex;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_releaseNotes;
    SKUILayoutCache *_textLayoutCache;
    SKUIColorScheme *_colorScheme;
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic) long long firstStringIndex;
@property (copy, nonatomic) NSArray *releaseNotes;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void)setExpanded:(_Bool)arg1;
- (id)initWithClientContext:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (void)_reloadHeaderView;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;

@end
