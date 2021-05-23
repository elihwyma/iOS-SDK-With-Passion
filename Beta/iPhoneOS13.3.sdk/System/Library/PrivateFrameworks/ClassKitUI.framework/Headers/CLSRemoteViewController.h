/*
 Image: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface CLSRemoteViewController : _UIRemoteViewController

{
    UIWindow *_previousKeyWindow;
    UIWindow *_window;
}

@property (retain, nonatomic) UIWindow *previousKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)instantiateViewControllerWithInputItems:(id)arg1 identifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)presentModallyInNewWindowWithCompletion:(CDUnknownBlockType)arg1;

@end
