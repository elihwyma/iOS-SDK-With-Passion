/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <UIKit/UIViewController.h>

@class NSExtensionContext, NSString;

@interface FLExtensionViewController : UIViewController

{
    NSExtensionContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)finishProcessing;
- (void)viewDidAppear:(_Bool)arg1;
- (id)hostInterface;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)followUpPerformUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
