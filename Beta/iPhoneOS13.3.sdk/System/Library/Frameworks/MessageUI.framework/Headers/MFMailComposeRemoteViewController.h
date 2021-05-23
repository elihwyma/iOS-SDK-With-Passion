/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController

{
    id <MFMailComposeRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <MFMailComposeRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)serviceCompositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serviceCompositionFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)bodyFinishedDrawing;

@end
