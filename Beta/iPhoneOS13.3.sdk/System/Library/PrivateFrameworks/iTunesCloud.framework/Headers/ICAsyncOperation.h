/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSOperation.h>

@class NSError, NSObject;

@protocol OS_dispatch_queue;

@interface ICAsyncOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSError *_error;
}

@property (copy, nonatomic, readonly) NSError *error;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)_execute;
- (void)execute;
- (void)finishWithError:(id)arg1;

@end
