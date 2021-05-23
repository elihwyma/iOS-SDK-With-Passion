/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SearchUIImageView, TLKStackView;

@interface SearchUITwitterCardSectionView

{
    SearchUIImageView *_pictureView;
}

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *pictureView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end
