/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@interface STPINRemoteViewController : _UIRemoteViewController

{
    CDUnknownBlockType _pinServiceDidComplete;
}

@property (copy, nonatomic) CDUnknownBlockType pinServiceDidComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)pinServiceDidCompleteWithError:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
