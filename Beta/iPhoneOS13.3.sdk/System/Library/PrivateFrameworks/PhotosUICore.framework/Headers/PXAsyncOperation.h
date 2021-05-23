/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@class NSLock;

@interface PXAsyncOperation : NSOperation

{
    NSLock *_stateLock;
    int _operationState;
}

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)px_start;
- (void)px_finishIfPossible;

@end
