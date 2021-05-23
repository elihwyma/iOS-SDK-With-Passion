/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSString;

@protocol OS_dispatch_queue, VMCoreTelephonyClient;

@interface VMTelephonyClient : NSObject

{
    struct os_unfair_lock_s _accessorLock;
    struct os_unfair_lock_s _delegateLock;
    NSArray *_subscriptions;
    NSMapTable *_delegateToQueue;
    id <VMCoreTelephonyClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s accessorLock;
@property (nonatomic, readonly) struct os_unfair_lock_s delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) id <VMCoreTelephonyClient> client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSArray *subscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)subscriberCountryCodeDidChange:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicDelegateBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 client:(id)arg2;
- (id)fetchSubscriptions;
- (id)abbreviatedLabelForSubscription:(id)arg1;
- (id)isoCountryCodeForSubscription:(id)arg1;

@end
