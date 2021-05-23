/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class DOCTagDotView, DOCTagView, DOCVisualEffectLabel, NSArray, NUIContainerStackView;

@protocol DOCTagViewDelegate;

@interface DOCTagsLineView : UIView

{
    NSArray *_tags;
    id <DOCTagViewDelegate> _delegate;
    NUIContainerStackView *_stackView;
    DOCTagView *_tag1View;
    DOCTagView *_tag2View;
    NUIContainerStackView *_dotsView;
    DOCTagDotView *_dot1View;
    DOCTagDotView *_dot2View;
    DOCTagDotView *_dot3View;
    DOCVisualEffectLabel *_tagSummaryLabel;
    NSArray *_tagWidthConstraints;
}

@property (nonatomic, readonly) NUIContainerStackView *stackView;
@property (nonatomic, readonly) DOCTagView *tag1View;
@property (nonatomic, readonly) DOCTagView *tag2View;
@property (nonatomic, readonly) NUIContainerStackView *dotsView;
@property (nonatomic, readonly) DOCTagDotView *dot1View;
@property (nonatomic, readonly) DOCTagDotView *dot2View;
@property (nonatomic, readonly) DOCTagDotView *dot3View;
@property (nonatomic, readonly) DOCVisualEffectLabel *tagSummaryLabel;
@property (nonatomic, readonly) NSArray *tagWidthConstraints;
@property (retain, nonatomic) NSArray *tags;
@property (weak, nonatomic) id <DOCTagViewDelegate> delegate;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (void)layoutTags;
- (id)createTagView;
- (id)createDotView;
- (id)createTagSummaryLabel;
- (void)updateMaxTagWidth;
- (void)configureTagView:(id)arg1 withTag:(id)arg2;
- (void)configureDotsView:(id)arg1 withTags:(id)arg2;
- (void)configureTagLabel:(id)arg1 withTag:(id)arg2 tagCount:(unsigned long long)arg3;
- (double)maxTagWidth;
- (void)configureDotView:(id)arg1 withTag:(id)arg2;

@end
