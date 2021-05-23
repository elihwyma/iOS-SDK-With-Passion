/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITextView.h>

@class UILabel;

@interface EKPlaceholderTextView : UITextView

{
    UILabel *_placeholder;
    _Bool _showingPlaceholder;
}

- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (id)_placeholderLabel;
- (void)textChanged:(id)arg1;
- (void)_updatePlaceholder;

@end
