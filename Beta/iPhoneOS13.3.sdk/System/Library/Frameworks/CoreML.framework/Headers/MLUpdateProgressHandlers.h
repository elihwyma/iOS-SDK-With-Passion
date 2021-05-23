/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLUpdateProgressHandlers : NSObject

{
    long long _interestedEvents;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property long long interestedEvents;
@property (copy) CDUnknownBlockType progressHandler;
@property (copy) CDUnknownBlockType completionHandler;

- (id)description;
- (id)initForEvents:(long long)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5;
- (void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2;

@end
