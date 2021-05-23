/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UITableViewCell.h>

@class UITextView;

@interface CACCustomCommandActionTextViewCell : UITableViewCell

{
    UITextView *_textView;
}

@property (nonatomic, readonly) UITextView *textView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
