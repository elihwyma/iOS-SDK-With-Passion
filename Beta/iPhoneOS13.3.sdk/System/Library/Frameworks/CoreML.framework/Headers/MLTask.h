/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSError, NSString;

@protocol OS_dispatch_queue;

@interface MLTask : NSObject

{
    NSString *_taskIdentifier;
    long long _state;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property long long state;
@property (copy) NSError *error;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (copy, nonatomic, readonly) NSString *taskIdentifier;

- (void)cancel;
- (void)resume;
- (id)initWithState:(long long)arg1;
- (_Bool)_canResume;
- (_Bool)_canCancel;
- (_Bool)_canSuspend;
- (_Bool)_canComplete;
- (_Bool)_canFail;
- (void)_resumeWithTaskContext:(id)arg1;
- (void)resumeWithTaskContext:(id)arg1;
- (void)suspendWithTaskContext:(id)arg1;
- (void)completeWithTaskContext:(id)arg1;
- (void)failWithError:(id)arg1 taskContext:(id)arg2;
- (id)taskStatesToString:(long long)arg1;

@end
