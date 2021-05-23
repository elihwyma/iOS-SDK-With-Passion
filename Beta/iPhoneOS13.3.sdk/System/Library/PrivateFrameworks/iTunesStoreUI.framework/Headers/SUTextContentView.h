/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UITextContentView.h>

@class NSString, UILabel;

@interface SUTextContentView : UITextContentView

{
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (void)dealloc;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)keyboardInputChangedSelection:(id)arg1;

@end
