/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthStoreClient, HDProfile, NSLock, NSString;

@protocol HDClientDataCollectionObservationStateMonitorDelegate;

@interface HDClientDataCollectionObservationStateMonitor : NSObject

{
    NSLock *_lock;
    _Atomic _Bool _invalidated;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
    id <HDClientDataCollectionObservationStateMonitorDelegate> _delegate;
}

@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (weak, nonatomic) id <HDClientDataCollectionObservationStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)initWithClient:(id)arg1 delegate:(id)arg2;
- (id)currentObserverState;
- (void)workoutManagerDidChangeState:(id)arg1;
- (void)_componentStateDidChange;

@end
