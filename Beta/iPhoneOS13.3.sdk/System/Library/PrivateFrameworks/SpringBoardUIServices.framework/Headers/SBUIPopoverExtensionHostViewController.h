/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController

{
    id <_SBUIPopoverExtensionHostDelegate> _delegate;
}

@property (weak, nonatomic) id <_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_extensionRequestsDismiss;

@end
