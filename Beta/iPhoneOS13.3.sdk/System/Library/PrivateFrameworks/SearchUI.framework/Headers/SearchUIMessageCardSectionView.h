/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKMessageView;

@interface SearchUIMessageCardSectionView

@property (retain, nonatomic) TLKMessageView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (unsigned long long *)messageStatusForSearchUIMessageStatus:(int)arg1;
- (unsigned long long *)messageServiceTypeForSearchUIMessageServiceType:(int)arg1;

@end
