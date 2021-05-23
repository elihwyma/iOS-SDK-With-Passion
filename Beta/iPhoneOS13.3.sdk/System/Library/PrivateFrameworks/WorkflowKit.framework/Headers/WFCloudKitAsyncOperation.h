/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSOperation.h>

@interface WFCloudKitAsyncOperation : NSOperation

{
    _Bool _isExecuting;
    _Bool _isFinished;
}

@property _Bool isExecuting;
@property _Bool isFinished;

- (void)start;
- (void)startExecuting;
- (void)finishExecuting;

@end
