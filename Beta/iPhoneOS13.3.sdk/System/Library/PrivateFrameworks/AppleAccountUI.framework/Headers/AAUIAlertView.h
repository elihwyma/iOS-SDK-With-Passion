/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIAlertView.h>

@class NSObject;

@protocol OS_dispatch_semaphore;

@interface AAUIAlertView : UIAlertView

{
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;
    long long _chosenButtonIndex;
    CDUnknownBlockType _action;
    CDUnknownBlockType _actionWithText;
}

@property (readonly) long long chosenButtonIndex;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(CDUnknownBlockType)arg6;

@end
