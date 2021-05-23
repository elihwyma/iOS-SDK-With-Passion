/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFKeyboard : NSObject

{
    _Bool _visible;
    long long _animationCurve;
    double _animationDuration;
    struct CGRect _keyboardFrame;
}

@property (nonatomic, readonly) struct CGRect keyboardFrame;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) double animationDuration;

+ (id)sharedKeyboard;
+ (void)beginObservingKeyboardNotifications;

- (id)init;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillChangeVisible:(id)arg1;
- (struct CGRect)keyboardFrameInView:(id)arg1;

@end
