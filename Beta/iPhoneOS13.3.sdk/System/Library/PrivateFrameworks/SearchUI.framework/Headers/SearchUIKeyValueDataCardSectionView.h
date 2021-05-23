/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKKeyValueView;

@interface SearchUIKeyValueDataCardSectionView

@property (retain, nonatomic) TLKKeyValueView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (id)convertSFKeyValueData:(id)arg1;

@end
