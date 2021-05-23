/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNUIContactsEnvironment, HKHealthStore, NSMutableDictionary, _HKMedicalIDData;

@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNHealthStoreManager : NSObject

{
    int _healthNotificationToken;
    _Bool _needsFetching;
    _Bool _isListeningToChanges;
    CNUIContactsEnvironment *_environment;
    _HKMedicalIDData *_medicalIDData;
    id <CNScheduler> _workQueue;
    NSMutableDictionary *_medicalIDDataHandlers;
    id <CNScheduler> _stateLock;
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (nonatomic, readonly) id <CNScheduler> workQueue;
@property (nonatomic) _Bool needsFetching;
@property (nonatomic) _Bool isListeningToChanges;
@property (nonatomic, readonly) NSMutableDictionary *medicalIDDataHandlers;
@property (nonatomic, readonly) id <CNScheduler> stateLock;
@property (retain, nonatomic) HKHealthStore *healthStore;

+ (id)descriptorForRequiredKeys;
+ (_Bool)shouldShowEmergencyContacts;
+ (CDUnknownBlockType)emergencyContactMatchingContact:(id)arg1;
+ (id)identifiersForContactMatchingEmergencyContacts:(id)arg1 contactStore:(id)arg2;

- (void)dealloc;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 healthStore:(id)arg2;
- (id)nts_lazyHealthStore;
- (id)registerMedicalIDDataHandler:(CDUnknownBlockType)arg1;
- (void)unregisterHandlerForToken:(id)arg1;
- (void)updateAndDispatchMedicalIDData;
- (void)startListeningForChanges;
- (id)createMedicalIDFromContact:(id)arg1;

@end
