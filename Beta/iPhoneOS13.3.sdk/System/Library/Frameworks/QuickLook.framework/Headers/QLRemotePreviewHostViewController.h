/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <_UIRemoteViewController.h>

@class NSExtension, QLRemoteItemViewController;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewHostViewController : _UIRemoteViewController

{
    QLRemoteItemViewController *_remoteItemViewController;
    NSExtension *_extension;
    id _request;
}

@property (weak) QLRemoteItemViewController *remoteItemViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id request;

- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
