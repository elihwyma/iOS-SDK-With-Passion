/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSCyclerOperation : NSObject

{
    unsigned long long _numberOfRemainingAttempts;
    float _backoffRatio;
    _Bool _finished;
    _Bool _executing;
    CDUnknownBlockType _block;
    double _nextBackoffTimeInterval;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isExecuting) _Bool executing;
@property (nonatomic, readonly) double nextBackoffTimeInterval;

- (id)init;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2;

@end
