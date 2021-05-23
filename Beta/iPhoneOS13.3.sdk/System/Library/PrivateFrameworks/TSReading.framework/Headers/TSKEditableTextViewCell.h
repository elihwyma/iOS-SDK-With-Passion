/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITableViewCell.h>

@class NSString, TSKPlaceholderTextView, UIView;

@protocol UITextViewDelegate;

@interface TSKEditableTextViewCell : UITableViewCell

{
    TSKPlaceholderTextView *mTextView;
    UIView *mInputView;
    _Bool mNumberHasDecimal;
    id <UITextViewDelegate> mSavedDelegate;
}

@property (retain, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (void)layoutSubviews;
- (void)setPlaceholder:(id)arg1;
- (void)tintColorDidChange;
- (void)setInputView:(id)arg1;
- (void)deleteBackward;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)isNegative;
- (void)p_parseText:(id)arg1;
- (void)p_insertString:(id)arg1;
- (void)setTextTag:(long long)arg1;
- (void)setTextDelegate:(id)arg1;
- (void)parseText;
- (void)insertNumber:(long long)arg1;
- (void)insertDecimalSeparator;
- (void)toggleNegative;

@end
