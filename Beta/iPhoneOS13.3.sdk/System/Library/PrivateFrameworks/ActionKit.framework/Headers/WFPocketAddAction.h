/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSError, NSObject, NSString;

@protocol OS_dispatch_group;

@interface WFPocketAddAction : WFAction

{
    NSObject<OS_dispatch_group> *_addGroup;
    NSError *_lastError;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *addGroup;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;

@end
