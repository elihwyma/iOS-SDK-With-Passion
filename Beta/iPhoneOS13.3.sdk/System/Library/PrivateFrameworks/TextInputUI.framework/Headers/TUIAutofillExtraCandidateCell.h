/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@class TIKeyboardCandidate, UILabel;

@interface TUIAutofillExtraCandidateCell

{
    TIKeyboardCandidate *_candidate;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (id)reuseIdentifier;
+ (id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4;

- (id)initWithCoder:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLabel;

@end
