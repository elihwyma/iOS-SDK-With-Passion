/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NUIContainerBoxView, TLKLabel;

@interface SearchUITitleCardSectionView

{
    TLKLabel *_label;
    NUIContainerBoxView *_containerView;
}

@property (retain, nonatomic) TLKLabel *label;
@property (retain, nonatomic) NUIContainerBoxView *containerView;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
