/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFMailComposeHeaderView.h>

@class NSString, UIButton, UITextView;

@protocol MFComposeSubjectViewDelegate;

@interface MFComposeSubjectView : MFMailComposeHeaderView

{
    unsigned int _delegateRespondsToTextChange:1;
    unsigned int _delegateRespondsToWillRemoveContent:1;
    unsigned int _notifyButtonSelected:1;
    unsigned int _showNotifyButton:1;
    unsigned int _showContentVariationButton:1;
    unsigned int _contentVariationButtonSelected:1;
    _Bool _needsExclusionPathUpdate;
    UITextView *_textView;
    UIButton *_notifyButton;
    UIButton *_contentVariationButton;
    double _trailingButtonMidlineInsetFromLayoutMargin;
}

@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) UIButton *notifyButton;
@property (nonatomic, readonly) UIButton *contentVariationButton;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (nonatomic, getter=isNotifyButtonSelected) _Bool notifyButtonSelected;
@property (nonatomic, getter=isContentVariationButtonSelected) _Bool contentVariationButtonSelected;
@property (weak, nonatomic) id <MFComposeSubjectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)endEditing:(_Bool)arg1;
- (_Bool)_canBecomeFirstResponder;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)refreshPreferredContentSize;
- (void)notifyButtonClicked:(id)arg1;
- (void)contentVariationButtonTapped:(id)arg1;
- (void)updateNotifyButton;
- (void)updateContentVariationButton;
- (void)_updateTextContainerInsets;
- (void)_textInputDidChange:(id)arg1;
- (id)_textContainerExclusionPathsWithNotifyButton:(_Bool)arg1 withContentVariationButton:(_Bool)arg2;
- (void)_updateExclusionPathsIfNeeded;
- (void)displayMetricsDidChange;
- (_Bool)isEndEditingText:(id)arg1;
- (void)setShowNotifyButton:(_Bool)arg1;
- (void)setShowContentVariationButton:(_Bool)arg1;
- (_Bool)isContentVariationSelected;

@end
