/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)configureRuntimeResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(CDUnknownBlockType)arg2 writtenByteCountHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
