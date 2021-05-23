/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFRSSFeedExtractAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)configureRuntimeResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addRSSFeedItemsFromHTML:(id)arg1 baseURL:(id)arg2 encoding:(id)arg3;

@end
