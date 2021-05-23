/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol WFOutOfProcessWorkflowControllerHost;

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext

{
    id <WFOutOfProcessWorkflowControllerHost> _delegate;
}

@property (weak, nonatomic) id <WFOutOfProcessWorkflowControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)workflowDidStart;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(_Bool)arg2;

@end
