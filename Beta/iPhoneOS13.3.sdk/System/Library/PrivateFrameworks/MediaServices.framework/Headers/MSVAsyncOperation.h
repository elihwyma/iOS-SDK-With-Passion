/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSOperation.h>

@class NSError, NSObject;

@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

{
    _Bool __executing;
    _Bool __finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (copy, nonatomic) NSError *error;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) _Bool _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) _Bool _finished;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)execute;
- (void)finishWithError:(id)arg1;

@end
