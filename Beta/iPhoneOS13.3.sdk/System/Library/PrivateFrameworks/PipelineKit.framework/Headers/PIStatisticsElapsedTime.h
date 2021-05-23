/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <Foundation/NSObject.h>

@interface PIStatisticsElapsedTime : NSObject

{
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (id)init;
- (void)dealloc;
- (void)end;
- (void)begin;
- (double)elapsedTime;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTimeSinceLastEndTransaction;
- (_Bool)isTransactionPending;

@end
