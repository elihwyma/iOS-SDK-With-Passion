/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSOperation.h>

@interface WLKAsyncOperation : NSOperation

{
    int _state;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finishExecutionIfPossible;
- (void)executionDidBegin;

@end
