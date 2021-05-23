/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKSectionHeaderView;

@interface SearchUISectionHeaderCardSectionView

@property (retain, nonatomic) TLKSectionHeaderView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
