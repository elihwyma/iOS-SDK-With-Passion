/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSArray, SOSLegacyContactsManager;

@protocol OS_dispatch_semaphore;

@interface SOSContactsManager : NSObject

{
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
    NSArray *_medicalIDEmergencyContacts;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_semaphore> *_medicalIDContactsInitialStateSemaphore;
    struct _opaque_pthread_mutex_t _medicalIDEmergencyContactsMutex;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore;
@property (retain, nonatomic) NSArray *medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t medicalIDEmergencyContactsMutex;
@property (nonatomic, readonly) _Bool SOSContactsExist;
@property (nonatomic, readonly) SOSLegacyContactsManager *legacyContactsManager;

+ (id)contactStore;
+ (_Bool)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;

- (id)init;
- (void)dealloc;
- (id)_userDefaults;
- (id)initWithHealthStore:(id)arg1;
- (void)_medicalContactsDidChange;
- (void)fetchMedicalIDEmergencyContacts;
- (void)_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isEmergencyNumber:(id)arg1;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (id)SOSContactDestinations;
- (id)phoneNumbersToMessage;
- (void)_waitForMedicalIDInitialState;
- (_Bool)hasValidContactsToMessage;

@end
