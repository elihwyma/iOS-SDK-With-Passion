/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@class NSString, UIAlertView;

@interface TPAlertViewHelper : NSObject

{
    CDUnknownBlockType _completionHandler;
    UIAlertView *_alertView;
}

@property (readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_workQueue;
+ (id)alertHelperWithHandler:(CDUnknownBlockType)arg1 style:(long long)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;
+ (id)_allHelpersArray;

- (void)dealloc;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)dismissWithClickedButtonIndexAnimated:(long long)arg1;
- (void)dismissWithCancelAnimated:(_Bool)arg1;
- (id)_underlyingAlertView;

@end
