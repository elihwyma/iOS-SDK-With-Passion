/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class HDDataCollectionManager, HDDataCollectionObserverState, NSSet;

@interface HDDataCollectionAssertion : HDAssertion

{
    struct os_unfair_lock_s _lock;
    HDDataCollectionObserverState *_observerState;
    NSSet *_sampleTypes;
    double _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}

@property (nonatomic, readonly) NSSet *sampleTypes;
@property (nonatomic, readonly) double collectionInterval;
@property (weak, nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (copy, nonatomic) HDDataCollectionObserverState *observerState;

- (id)description;
- (id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4;

@end
