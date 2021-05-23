/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, NSMutableDictionary, PKInAppPaymentService;

@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject

{
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}

+ (id)sharedManager;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)canEnrollPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)performCanEnrollPaymentPass:(id)arg1;
- (id)performEnrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (void)enrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
