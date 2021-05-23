/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconCell.h>

@class NSString, UITextView;

@protocol UITextViewDelegate;

@interface HUEditableTextViewCell : HUIconCell

{
    _Bool _editEnabled;
    _Bool _showingPlaceholder;
    NSString *_text;
    NSString *_placeholderText;
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) _Bool showingPlaceholder;
@property (weak, nonatomic) id <UITextViewDelegate> textViewDelegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) _Bool editEnabled;

- (void)prepareForReuse;
- (void)setDisabled:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleUITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)handleUITextViewTextDidEndEditingNotification:(id)arg1;
- (void)updateTextColor;
- (id)trimmedStringForText:(id)arg1;

@end
