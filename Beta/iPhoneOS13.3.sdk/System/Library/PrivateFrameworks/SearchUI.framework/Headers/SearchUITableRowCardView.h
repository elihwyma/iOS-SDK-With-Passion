/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKGridRowView;

@interface SearchUITableRowCardView

@property (retain, nonatomic) TLKGridRowView *contentView;

+ (struct UIEdgeInsets)defaultLayoutMargins;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (double)largestImageSizeForSection:(id)arg1;
+ (_Bool)hasOnlyImages:(id)arg1;
+ (_Bool)isAHeader:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (struct UIEdgeInsets)verticalBaselineInsetsForHeader:(_Bool)arg1 isCompactTable:(_Bool)arg2;
- (struct UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(_Bool)arg1;

@end
