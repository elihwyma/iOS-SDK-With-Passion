/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDKeyValueDomain, HDProfile, NSError, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject

{
    _Bool _needsPopulationWhenProtectedDataAvailable;
    _Bool _hasCompletedFirstPopulateFromDatabase;
    _Bool _populatesValuesFromDatabase;
    NSString *_databaseIdentifier;
    HDProfile *_profile;
    HDKeyValueDomain *_defaultsDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSHashTable *_observers;
    NSError *_injectedError;
    CDUnknownBlockType _populationCompleteBlock;
    NSHashTable *_propertyProviders;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *defaultsDomain;
@property (nonatomic) _Bool needsPopulationWhenProtectedDataAvailable;
@property (nonatomic) _Bool hasCompletedFirstPopulateFromDatabase;
@property (nonatomic) _Bool populatesValuesFromDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSError *injectedError;
@property (copy, nonatomic) CDUnknownBlockType populationCompleteBlock;
@property (retain, nonatomic) NSHashTable *propertyProviders;
@property (copy, nonatomic) NSString *databaseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)addPropertyProvider:(id)arg1;
- (void)_syncEntityDidReceiveValues:(id)arg1;
- (_Bool)_queue_populateAllPropertiesFromDatabase;
- (_Bool)_queue_populateFromDatabaseForProviders:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_setDatabaseIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)clearAllPropertiesWithError:(id *)arg1 databaseContext:(id)arg2;
- (void)commitAllPropertiesToDatabaseWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (id)_queue_allPropertyProviderKeys;
- (void)_injectError:(id)arg1;
- (_Bool)_forceDatabasePopulate;

@end
