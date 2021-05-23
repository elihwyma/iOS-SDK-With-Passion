/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface ICAsyncBlockOperation : ICAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _startHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType startHandler;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;

- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;

@end
