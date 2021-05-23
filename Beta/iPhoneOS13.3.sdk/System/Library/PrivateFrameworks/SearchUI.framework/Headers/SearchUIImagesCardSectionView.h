/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class TLKImagesView;

@interface SearchUIImagesCardSectionView

@property (retain, nonatomic) TLKImagesView *contentView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
