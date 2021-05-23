/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSOperation.h>

@class NSError, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

@property (readonly) long long status;
@property (readonly) NSError *error;

+ (void)initialize;
+ (long long)statusOfOperations:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)markAsFailedWithError:(id)arg1;
- (void)markAsCompleted;
- (_Bool)evaluateDependenciesAndMarkAsExecuting;
- (void)markAsCancelled;
- (void)didEnterTerminalState;
- (_Bool)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long *)arg3 failureReason:(id *)arg4;

@end
