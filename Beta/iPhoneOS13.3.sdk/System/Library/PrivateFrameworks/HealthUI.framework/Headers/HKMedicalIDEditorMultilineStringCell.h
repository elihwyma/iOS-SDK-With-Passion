/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSString, UILabel, UITextView;

@protocol HKMedicalIDEditorCellHeightChangeDelegate;

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell

{
    UILabel *_labelLabel;
    double _lastSeenTextViewContentHeight;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    id <HKMedicalIDEditorCellHeightChangeDelegate> _heightChangeDelegate;
    struct UIEdgeInsets _textViewExtraMargins;
}

@property (nonatomic) struct UIEdgeInsets textViewExtraMargins;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id <HKMedicalIDEditorCellHeightChangeDelegate> heightChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)showsLabelAndValue;

- (void)dealloc;
- (void)setLabel:(id)arg1;
- (id)label;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)commitEditing;
- (void)_labelTapped:(id)arg1;
- (struct CGRect)_cursorRectForTextView:(id)arg1;
- (double)estimatedHeightWithWidth:(double)arg1;

@end
