/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class SearchUILabel, TLKStackView;

@interface SearchUICompactCardSectionView

{
    TLKStackView *_stackView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_subtitleLabel;
}

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2;

@end
