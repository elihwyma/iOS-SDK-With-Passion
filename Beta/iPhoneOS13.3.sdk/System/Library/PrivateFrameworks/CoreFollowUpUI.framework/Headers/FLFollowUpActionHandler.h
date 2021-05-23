/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <CoreFollowUp/FLHeadlessActionHandler.h>

@class FLViewExtensionLoader, NSString, UIViewController;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler

{
    FLViewExtensionLoader *_extensionLoader;
    UIViewController *_remoteViewController;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _extensionRequestedViewControllerPresentation;
}

@property (copy, nonatomic) CDUnknownBlockType extensionRequestedViewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_extensionLoader;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extensionDidFinish;
- (void)extensionDidFinishWithError:(id)arg1;

@end
