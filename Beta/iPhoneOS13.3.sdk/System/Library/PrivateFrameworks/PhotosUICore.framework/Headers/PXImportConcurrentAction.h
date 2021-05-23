/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@interface PXImportConcurrentAction : NSOperation

{
    _Bool _executing;
    _Bool _finished;
}

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)finish;
- (id)performAction;

@end
