/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIAlertController.h>

@interface WFPromptAlertController : UIAlertController

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (id)promptAlertControllerWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 successTitle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
