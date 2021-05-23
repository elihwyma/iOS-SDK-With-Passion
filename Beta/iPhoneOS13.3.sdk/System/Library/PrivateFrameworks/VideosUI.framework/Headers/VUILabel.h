/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVLabel.h>

@class NSString, VUITextLayout;

@interface VUILabel : _TVLabel

{
    _Bool _selected;
    _Bool _lastSelectedOrHighlighted;
    VUITextLayout *_textLayout;
    NSString *_labelName;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (copy, nonatomic) NSString *labelName;

+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
+ (id)labelWithAttributedString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTextColor;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)baselineHeight;
- (void)_updateCompositingFilter;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2;
- (double)bottomMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2;
- (void)_updateTextColor:(_Bool)arg1;
- (_Bool)requiresMoreThanOneLineForTextWidth:(double)arg1;

@end
