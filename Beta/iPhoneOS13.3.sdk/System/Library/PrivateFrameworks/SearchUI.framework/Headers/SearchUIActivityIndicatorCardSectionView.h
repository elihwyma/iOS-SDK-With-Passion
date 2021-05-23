/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKActivityIndicatorView;

@interface SearchUIActivityIndicatorCardSectionView

@property (retain, nonatomic) TLKActivityIndicatorView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
