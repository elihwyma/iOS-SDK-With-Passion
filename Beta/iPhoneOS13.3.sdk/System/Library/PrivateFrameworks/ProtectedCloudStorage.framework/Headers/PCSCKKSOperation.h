/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation

{
    _Bool executing;
    _Bool finished;
    _Bool cancelled;
    NSError *_error;
    NSMutableArray *_successDependencies;
}

@property (retain) NSMutableArray *successDependencies;
@property (getter=isExecuting) _Bool executing;
@property (getter=isFinished) _Bool finished;
@property (getter=isCancelled) _Bool cancelled;
@property (retain) NSError *error;

+ (id)operation:(id)arg1 block:(CDUnknownBlockType)arg2;

- (_Bool)startOperation;
- (void)completeOperation;
- (_Bool)checkDependencies;
- (void)addSuccessDependency:(id)arg1;

@end
