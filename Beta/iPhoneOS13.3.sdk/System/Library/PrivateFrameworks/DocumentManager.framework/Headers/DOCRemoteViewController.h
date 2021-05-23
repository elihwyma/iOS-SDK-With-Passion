/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/_UIRemoteViewController.h>

@class DOCAppearance, DOCConfiguration, DOCRemoteContext;

@protocol DOCRemoteViewControllerDelegate;

@interface DOCRemoteViewController : _UIRemoteViewController

{
    _Bool _isBrowserViewController;
    id <DOCRemoteViewControllerDelegate> _delegate;
    DOCRemoteContext *_hostContext;
    DOCConfiguration *_configuration;
    DOCAppearance *_lastAppearance;
}

@property (retain) DOCRemoteContext *hostContext;
@property (retain) DOCConfiguration *configuration;
@property _Bool isBrowserViewController;
@property (retain) DOCAppearance *lastAppearance;
@property (weak) id <DOCRemoteViewControllerDelegate> delegate;

+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)serviceExtension;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteViewControllerWithConfiguration:(id)arg1 transparent:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3 hostProxy:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;

@end
