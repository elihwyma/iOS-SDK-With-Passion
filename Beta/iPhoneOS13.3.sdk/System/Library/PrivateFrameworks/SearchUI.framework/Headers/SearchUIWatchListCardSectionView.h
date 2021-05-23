/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NUIContainerStackView, SearchUIButton, SearchUIWatchListCardRowModel, TLKSimpleRowView;

@interface SearchUIWatchListCardSectionView

{
    SearchUIButton *_button;
    TLKSimpleRowView *_rowView;
}

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIButton *button;
@property (retain, nonatomic) TLKSimpleRowView *rowView;
@property (retain, nonatomic) SearchUIWatchListCardRowModel *rowModel;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (void)didUpdateRowModel:(id)arg1 animate:(_Bool)arg2;
- (void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3;

@end
