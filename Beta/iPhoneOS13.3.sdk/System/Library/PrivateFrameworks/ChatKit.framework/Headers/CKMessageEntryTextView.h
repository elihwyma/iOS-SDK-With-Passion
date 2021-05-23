/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <EmojiKit/EMKTextView.h>

@class NSAttributedString, NSString, UIColor, UIKeyboardInputMode, UILabel;

@interface CKMessageEntryTextView : EMKTextView

{
    _Bool _showingDictationPlaceholder;
    _Bool _sendCurrentLocationFromKeyboardEnabled;
    _Bool _updatesFontOnTextChange;
    _Bool _hideCaret;
    UIColor *_placeholderColor;
    double _placeHolderWidth;
    double _placeholderExpandedWidth;
    NSString *_autocorrectionContext;
    NSString *_responseContext;
    double _adjustedLineFragmentPadding;
    UILabel *_placeholderLabel;
    UIKeyboardInputMode *_savedKeyboardInputMode;
}

@property (nonatomic, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode;
@property (copy, nonatomic) NSAttributedString *compositionText;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) double placeholderExpandedWidth;
@property (nonatomic, readonly, getter=isSingleLine) _Bool singleLine;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) _Bool sendCurrentLocationFromKeyboardEnabled;
@property (nonatomic) _Bool updatesFontOnTextChange;
@property (nonatomic) _Bool hideCaret;
@property (nonatomic) double adjustedLineFragmentPadding;

- (void)dealloc;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (void)setAttributedText:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (SEL)_sendCurrentLocationAction;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)updateTextView;
- (void)saveKeyboardInputMode;
- (void)restoreKeyboardInputMode;
- (void)updateFontIfNeeded;

@end
