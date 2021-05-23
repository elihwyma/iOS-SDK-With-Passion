/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSOperation.h>

@interface _DKSyncOperation : NSOperation

{
    _Atomic unsigned char _state;
}

+ (_Bool)_removesDependenciesAfterFinish;

- (id)init;
- (void)dealloc;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)endOperation;
- (void)startOperation;

@end
