/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITextView.h>

@class NSString, UILabel;

@interface TSKPlaceholderTextView : UITextView

{
    UILabel *mPlaceholderView;
}

@property (retain, nonatomic) NSString *placeholder;

- (void)dealloc;
- (void)setText:(id)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (_Bool)becomeFirstResponder;
- (void)didMoveToSuperview;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)p_textDidChange:(id)arg1;

@end
