/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface SLRemoteComposeViewController : _UIRemoteViewController

{
    id <SLRemoteComposeViewControllerDelegateProtocol> _delegate;
}

@property (weak, nonatomic) id <SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
