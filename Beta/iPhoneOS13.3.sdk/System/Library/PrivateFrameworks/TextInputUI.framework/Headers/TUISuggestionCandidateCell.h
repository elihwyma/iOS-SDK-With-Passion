/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@class TIKeyboardCandidateSuggestion, UILabel;

@interface TUISuggestionCandidateCell

{
    TIKeyboardCandidateSuggestion *_candidate;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TIKeyboardCandidateSuggestion *candidate;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLabel;

@end
