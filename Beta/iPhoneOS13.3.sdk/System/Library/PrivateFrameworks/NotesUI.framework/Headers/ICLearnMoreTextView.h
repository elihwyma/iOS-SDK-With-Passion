/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UITextView.h>

@class NSString, UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView

{
    _Bool _isShowingLearnMore;
    NSString *_helpTopicID;
    NSString *_helpVersion;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_parentViewController;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) _Bool isShowingLearnMore;
@property (retain, nonatomic) NSString *helpTopicID;
@property (retain, nonatomic) NSString *helpVersion;

- (void)dealloc;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityActivate;
- (void)awakeFromNib;
- (void)tapGesture:(id)arg1;
- (_Bool)_accessibilityHasTextOperations;
- (void)updateForAccessibilityDarkerSystemColors;
- (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(_Bool)arg4;
- (void)resetTextView;
- (void)didTapLearnMore;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(_Bool)arg5;
- (void)setAttributedText:(id)arg1 addLearnMore:(_Bool)arg2 letterpress:(_Bool)arg3;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;

@end
