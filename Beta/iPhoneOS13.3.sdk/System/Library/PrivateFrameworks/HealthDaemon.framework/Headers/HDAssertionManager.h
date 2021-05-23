/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface HDAssertionManager : NSObject

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_assertionExpirationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *assertionExpirationQueue;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (_Bool)takeAssertion:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (void)_releaseAssertion:(id)arg1;
- (void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postNotification:(id)arg1 forAssertion:(id)arg2;
- (_Bool)hasActiveAssertionForIdentifier:(id)arg1;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;

@end
