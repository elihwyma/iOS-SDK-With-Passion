/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue;

@interface VMManager : NSObject

{
    struct os_unfair_lock_s _accessorLock;
    struct os_unfair_lock_s _delegateLock;
    NSMapTable *_delegateToQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s accessorLock;
@property (nonatomic, readonly) struct os_unfair_lock_s delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicDelegateBlock:(CDUnknownBlockType)arg1;

@end
