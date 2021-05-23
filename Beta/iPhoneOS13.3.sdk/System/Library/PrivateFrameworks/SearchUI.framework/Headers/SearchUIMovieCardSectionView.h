/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NUIContainerStackView, SFMediaInfoCardSection;

@interface SearchUIMovieCardSectionView

@property (retain, nonatomic) SFMediaInfoCardSection *section;
@property (retain, nonatomic) NUIContainerStackView *contentView;

+ (id)dragTitleForCardSection:(id)arg1;

- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end
