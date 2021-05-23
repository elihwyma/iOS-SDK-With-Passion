/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController

{
    RPPreviewViewController *_previewViewController;
    RPVideoEditorExtensionHostContext *_hostContext;
}

@property (weak, nonatomic) RPPreviewViewController *previewViewController;
@property (retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext;

- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end
