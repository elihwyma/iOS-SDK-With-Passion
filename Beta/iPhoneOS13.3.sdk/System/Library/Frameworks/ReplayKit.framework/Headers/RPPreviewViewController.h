/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIViewController.h>

@class NSString, NSURL, RPVideoEditorHostViewController;

@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : UIViewController

{
    _Bool _wasStatusBarHidden;
    id <RPPreviewViewControllerDelegate> _previewControllerDelegate;
    long long _mode;
    NSURL *_movieURL;
    RPVideoEditorHostViewController *_hostViewController;
}

@property (nonatomic) _Bool wasStatusBarHidden;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) RPVideoEditorHostViewController *hostViewController;
@property (weak, nonatomic) id <RPPreviewViewControllerDelegate> previewControllerDelegate;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)replayKitMacHelper:(id)arg1 didDismissVideoEditorSheetWithActivityTypes:(id)arg2;

@end
