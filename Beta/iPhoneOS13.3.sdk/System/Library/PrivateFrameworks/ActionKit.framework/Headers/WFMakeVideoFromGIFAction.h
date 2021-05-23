/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFMakeVideoFromGIFAction : WFAction

{
    CDUnknownBlockType _cancelBlock;
}

@property (copy, nonatomic) CDUnknownBlockType cancelBlock;

- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
