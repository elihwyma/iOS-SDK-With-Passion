/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, TLKSelectableGridView;

@interface SearchUISelectableGridCardSectionView

@property (retain, nonatomic) TLKSelectableGridView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)convertSFTitleSubtitleData:(id)arg1;

@end
