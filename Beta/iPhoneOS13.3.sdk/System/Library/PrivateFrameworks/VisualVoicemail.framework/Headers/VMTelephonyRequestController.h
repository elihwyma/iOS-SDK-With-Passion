/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableOrderedSet, VMTelephonyRequest;

@protocol OS_dispatch_queue;

@interface VMTelephonyRequestController : NSObject

{
    struct os_unfair_lock_s _accessorLock;
    struct os_unfair_lock_s _delegateLock;
    VMTelephonyRequest *_pendingRequest;
    NSMapTable *_delegateToQueue;
    NSMutableOrderedSet *_requests;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s accessorLock;
@property (nonatomic, readonly) struct os_unfair_lock_s delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (retain, nonatomic) VMTelephonyRequest *pendingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *requests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)execute;
- (void)addRequest:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)removeRequest:(id)arg1;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicDelegateBlock:(CDUnknownBlockType)arg1;
- (void)executeRequest:(id)arg1;
- (void)postResponse:(id)arg1 forRequest:(id)arg2;

@end
