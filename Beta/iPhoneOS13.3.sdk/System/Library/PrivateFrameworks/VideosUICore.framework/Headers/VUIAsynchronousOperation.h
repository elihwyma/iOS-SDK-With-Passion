/*
 Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation

{
    int _state;
}

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;

@end
