/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSInvocation;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject

{
    _Bool _enableUserInteraction;
    long long _reqcnt;
    NSInvocation *_presentInvocation;
    CDUnknownBlockType _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property (retain, nonatomic) NSInvocation *presentInvocation;

- (id)invocationTarget;
- (id)delayingController;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;
- (long long)requestCount;
- (long long)decrementRequestCount;
- (long long)incrementRequestCount;
- (void)cancelDelayedPresentation:(_Bool)arg1;
- (void)beginDelayedPresentation;
- (void)finishDelayedPresentation:(id)arg1;

@end
