/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <UIKit/_UIRemoteViewController.h>

@interface _CDPHostViewController : _UIRemoteViewController

{
    CDUnknownBlockType _viewServiceTerminationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType viewServiceTerminationBlock;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(CDUnknownBlockType)arg1;

@end
