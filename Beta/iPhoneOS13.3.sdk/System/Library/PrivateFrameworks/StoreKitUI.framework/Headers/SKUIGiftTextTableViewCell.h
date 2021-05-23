/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftTextTableViewCell : UITableViewCell

{
    UIView *_bottomBorderView;
    UILabel *_label;
    long long _maximumCharacterCount;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIView *_topBorderView;
    _Bool _leftToRight;
}

@property (nonatomic) _Bool leftToRight;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long maximumCharacterCount;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newTextView;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

@end
