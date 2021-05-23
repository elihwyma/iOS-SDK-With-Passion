/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFSubscribeToPodcastAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)contentNotFoundError;
- (void)subscribeToPodcast:(id)arg1;
- (id)genericSubscribeFailedError;
- (id)errorSubscribingToPodcast:(unsigned int)arg1;

@end
