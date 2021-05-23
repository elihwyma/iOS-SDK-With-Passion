/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <WorkflowUI/WFActionCustomView.h>

@class NSString, UIButton, UITextView, WFDictateTextActionStopButton;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionView : WFActionCustomView

{
    UITextView *_textView;
    WFDictateTextActionStopButton *_stopButton;
    UIButton *_inputSourceButton;
}

@property (weak, nonatomic) UITextView *textView;
@property (weak, nonatomic) WFDictateTextActionStopButton *stopButton;
@property (weak, nonatomic) UIButton *inputSourceButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeightForAction:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(id)arg1;
- (void)didEnterReusePool;
- (void)willLeaveReusePool;
- (void)action:(id)arg1 didReceiveTranscription:(id)arg2;
- (void)actionDidBeginListening:(id)arg1;
- (void)sourceButtonTapped;
- (void)stopButtonTapped;
- (void)updateInputSourceButton;

@end
