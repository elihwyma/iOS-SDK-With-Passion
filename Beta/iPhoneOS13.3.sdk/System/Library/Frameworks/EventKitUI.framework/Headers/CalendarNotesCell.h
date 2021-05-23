/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@class NSString, UITextView;

@interface CalendarNotesCell : EKUITableViewCell

{
    UITextView *_textView;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic, readonly) UITextView *textView;
@property (retain, nonatomic) NSString *placeholder;

- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
