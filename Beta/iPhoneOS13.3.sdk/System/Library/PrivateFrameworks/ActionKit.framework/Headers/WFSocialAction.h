/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFInterchangeAction.h>

@class NSString;

@interface WFSocialAction : WFInterchangeAction

@property (nonatomic, readonly) NSString *postPrefix;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)convertsAnimatedImagesToVideo;
- (void)convertAnimatedImagesToVideoWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
