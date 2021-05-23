/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UITableViewCell.h>

@class CALayer, NSString, RTTUtterance, UITextView;

@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : UITableViewCell

{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    _Bool _editingUtterance;
    _Bool _accessibilityIsUnread;
    RTTUtterance *_utterance;
    id <RTTUIUtteranceCellDelegate> _delegate;
}

@property (nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) _Bool accessibilityIsUnread;
@property (retain, nonatomic) RTTUtterance *utterance;
@property (nonatomic, getter=isEditingUtterance) _Bool editingUtterance;
@property (weak, nonatomic) id <RTTUIUtteranceCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;

- (void)dealloc;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateLayout;
- (struct _NSRange)selectedTextRange;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)textViewDidChange:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (_Bool)_accessibilityRealtimeCompleted;
- (_Bool)_accessibilityRealtimeHasUnread;
- (void)_accessibilityHandleATFocused:(_Bool)arg1 assistiveTech:(id)arg2;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;
- (void)updateUtterance:(id)arg1 postNotifications:(_Bool)arg2;
- (void)adjustTextViewSize;

@end
