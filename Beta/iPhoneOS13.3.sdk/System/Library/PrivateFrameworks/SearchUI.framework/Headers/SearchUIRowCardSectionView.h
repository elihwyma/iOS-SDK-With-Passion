/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView

@property (retain, nonatomic) TLKSimpleRowView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
