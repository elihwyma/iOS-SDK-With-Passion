/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : _UIRemoteViewController

{
    id <FPUIActionRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <FPUIActionRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
