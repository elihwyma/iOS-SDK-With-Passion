/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <WorkflowKit/WFAppInstalledResource.h>

@class NSString, SKStoreProductViewController;

@interface WFAppInstalledResource (UIKit)

@property (copy, nonatomic) CDUnknownBlockType recoveryCompletionHandler;
@property (retain, nonatomic) SKStoreProductViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)productViewControllerDidFinish:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showAppStoreForApp:(id)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
