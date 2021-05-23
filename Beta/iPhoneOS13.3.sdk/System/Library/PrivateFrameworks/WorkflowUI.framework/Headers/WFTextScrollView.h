/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIScrollView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UITextView;

@protocol UITextViewDelegate, WFTextField;

@interface WFTextScrollView : UIScrollView <Swift>

{
    UITextView<WFTextField> *_textView;
    id <UITextViewDelegate> _textViewDelegate;
    struct _NSRange _selectedRange;
}

@property (nonatomic) struct _NSRange selectedRange;
@property (nonatomic, readonly) UITextView<WFTextField> *textView;
@property (weak, nonatomic) id <UITextViewDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textUpdated;

@end
