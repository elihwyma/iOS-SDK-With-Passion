/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSDate, NSDictionary, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface HDUserCharacteristicsManager : NSObject

{
    _Bool _shouldUpdateQuantityCharacteristics;
    _Bool _needsUpdateAfterUnlock;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    NSHashTable *_observers;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, readonly) _Bool shouldUpdateQuantityCharacteristics;
@property (retain, nonatomic) NSDate *userProfileLastUpdated;
@property (copy, nonatomic) NSDictionary *lastUserProfile;
@property (nonatomic) _Bool needsUpdateAfterUnlock;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)diagnosticDescription;
- (void)addProfileObserver:(id)arg1;
- (void)removeProfileObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)userCharacteristicForType:(id)arg1 error:(id *)arg2;
- (id)modificationDateForCharacteristicWithType:(id)arg1 error:(id *)arg2;
- (id)_userCharacteristicForType:(id)arg1 entity:(id *)arg2 error:(id *)arg3;
- (_Bool)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(_Bool)arg3 updateProfileAndSync:(_Bool)arg4 error:(id *)arg5;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(_Bool)arg1 shouldSync:(_Bool)arg2;
- (void)_queue_updateQuantityCharacteristicsAndUserProfile;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateUserProfile;
- (void)_queue_alertObserversDidUpdateUserProfile;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id *)arg2;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (_Bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id *)arg3;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(_Bool)arg3;

@end
