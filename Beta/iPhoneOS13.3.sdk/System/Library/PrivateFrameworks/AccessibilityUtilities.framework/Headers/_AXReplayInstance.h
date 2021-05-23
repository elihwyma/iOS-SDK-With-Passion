/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol OS_dispatch_queue;

@interface _AXReplayInstance : NSObject

{
    _Bool _async;
    _Bool _didSucceed;
    CDUnknownBlockType _replayBlock;
    CDUnknownBlockType _completionBlock;
    double _interval;
    long long _maxAttempts;
    long long _attemptsRemaining;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_underlyingError;
    id _underlyingResult;
    NSString *_name;
}

@property (copy, nonatomic) CDUnknownBlockType replayBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) double interval;
@property (nonatomic) long long maxAttempts;
@property (nonatomic) long long attemptsRemaining;
@property (nonatomic) _Bool async;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool didSucceed;
@property (retain, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) id underlyingResult;
@property (retain, nonatomic) NSString *name;

+ (id)replayBlock:(CDUnknownBlockType)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(_Bool)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;

- (void)_dispatchAsynchronously;
- (void)_dispatchSynchronously;
- (id)_genericFailError;
- (void)dispatch;

@end
