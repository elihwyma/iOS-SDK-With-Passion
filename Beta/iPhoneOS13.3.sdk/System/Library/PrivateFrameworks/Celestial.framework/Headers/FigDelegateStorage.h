/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface FigDelegateStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    struct os_unfair_lock_s _lock;
}

@property (readonly) id delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1;

@end
