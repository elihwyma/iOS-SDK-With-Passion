/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthRecordsStore, HKHealthStore, HKSource, NSArray, NSDate, NSError, NSMutableSet, NSSet;

@interface HKClinicalSourceAuthorizationController : NSObject

{
    _Bool _anyDeterminedTypeAllowsReading;
    HKSource *_source;
    NSArray *_orderedTypesForReading;
    NSError *_fetchError;
    long long _authorizationModeForSource;
    NSDate *_displayReadAuthorizationAnchorDate;
    HKHealthStore *_healthStore;
    HKHealthRecordsStore *_healthRecordsStore;
    NSSet *_typesForReading;
    NSSet *_typesRequestedForReading;
    NSMutableSet *_typesEnabledForReading;
    CDUnknownBlockType __unitTesting_reminderRegistryCompletion;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (copy, nonatomic) NSSet *typesForReading;
@property (copy, nonatomic) NSError *fetchError;
@property (copy, nonatomic, readonly) NSSet *typesRequestedForReading;
@property (nonatomic, readonly) NSMutableSet *typesEnabledForReading;
@property (nonatomic) _Bool anyDeterminedTypeAllowsReading;
@property (nonatomic) long long authorizationModeForSource;
@property (copy, nonatomic) NSDate *displayReadAuthorizationAnchorDate;
@property (copy, nonatomic, setter=_unitTesting_setReminderRegistryCompletion:) CDUnknownBlockType _unitTesting_reminderRegistryCompletion;
@property (copy, nonatomic, readonly) HKSource *source;
@property (copy, nonatomic, readonly) NSArray *orderedTypesForReading;
@property (nonatomic, readonly) _Bool anyTypeRequested;

- (void)reload;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2 source:(id)arg3 typesRequestedForReading:(id)arg4;
- (_Bool)anyTypeEnabled;
- (id)_fetchAllClinicalAuthorizationRecordsWithError:(id *)arg1;
- (id)_orderTypes:(id)arg1;
- (id)_authorizationStatusesWithTypes:(id)arg1;
- (id)_authorizationModesWithMode:(long long)arg1 types:(id)arg2;
- (void)_setAuthorizationStatuses:(id)arg1 modes:(id)arg2 shouldUpdateAnchor:(_Bool)arg3;
- (void)setEnabled:(_Bool)arg1 forType:(id)arg2 commit:(_Bool)arg3;
- (_Bool)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)arg1;
- (void)_commitModeConfirmationAlertRegistrationShouldDisplay:(_Bool)arg1;
- (long long)_authorizationStatusWithType:(id)arg1;
- (void)_updateReminderRegistrationIfNeededForCommittingModes:(id)arg1 anyTypeEnabled:(_Bool)arg2;
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg1;
- (_Bool)isTypeEnabled:(id)arg1;
- (void)setEnabledForAllTypes:(_Bool)arg1;
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)arg1;
- (_Bool)allTypesEnabled;

@end
