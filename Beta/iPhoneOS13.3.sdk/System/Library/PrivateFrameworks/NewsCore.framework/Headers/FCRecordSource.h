/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKContentDatabase, FCCacheCoordinator, FCFetchCoordinator, FCKeyValueStore, FCThreadSafeMutableDictionary, NFUnfairLock, NSArray, NSDictionary, NSString;

@interface FCRecordSource : NSObject <Swift>

{
    struct os_unfair_lock_s _derivedKeysLock;
    NSArray *_desiredKeys;
    NSDictionary *_localizedKeysByOriginalKey;
    NSDictionary *_experimentalizedKeysByOriginalKey;
    NSDictionary *_localizedExperimentalizedKeysByOriginalKey;
    NSDictionary *_localizedLanguageSpecificKeysByOriginalKey;
    NFUnfairLock *_initializationLock;
    FCCKContentDatabase *_contentDatabase;
    NSString *_contentDirectory;
    FCKeyValueStore *_localStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCFetchCoordinator *_fetchCoordinator;
    FCThreadSafeMutableDictionary *_fetchErrorsByKey;
    NSString *_experimentalizableFieldsPostfix;
    NSString *_activeTreatmentID;
}

@property (retain, nonatomic) NFUnfairLock *initializationLock;
@property (nonatomic, readonly) FCCKContentDatabase *contentDatabase;
@property (nonatomic, readonly) NSString *contentDirectory;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) FCCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, readonly) struct os_unfair_lock_s derivedKeysLock;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (nonatomic, readonly) NSString *experimentalizableFieldsPostfix;
@property (nonatomic, readonly) NSString *activeTreatmentID;
@property (nonatomic, readonly) NSArray *nonLocalizableKeys;
@property (nonatomic, readonly) NSArray *localizableKeys;
@property (nonatomic, readonly) NSArray *experimentalizableKeys;
@property (nonatomic, readonly) NSArray *localizableExperimentalizableKeys;
@property (nonatomic, readonly) NSArray *localizableLanguageSpecificKeys;
@property (nonatomic, readonly) NSDictionary *localizedKeysByOriginalKey;
@property (nonatomic, readonly) NSDictionary *experimentalizedKeysByOriginalKey;
@property (nonatomic, readonly) NSDictionary *localizedExperimentalizedKeysByOriginalKey;
@property (nonatomic, readonly) NSDictionary *localizedLanguageSpecificKeysByOriginalKey;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identifierFromCKRecord:(id)arg1;
+ (_Bool)supportsDeletions;
+ (id)defaultCachePolicy;
+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)modificationDateFromCKRecord:(id)arg1;

- (id)init;
- (id)recordType;
- (id)storeFilename;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefix;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)cachedRecordsWithIDs:(id)arg1;
- (id)jsonEncodableObject;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (void)_deriveDesiredKeysIfNeeded;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1;
- (id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg1;
- (id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2;
- (id)_localizedLanguageSpecificKeysByOriginalKeyForContentStoreFrontID:(id)arg1 languageCode:(id)arg2;
- (void)_prepareForUse;
- (id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (id)_deleteRecordsWithWriteLockWithIDs:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_identifierFromCKRecordID:(id)arg1;
- (id)saveRecords:(id)arg1;
- (void)_initializeStore;
- (void)_deriveDesiredKeys;
- (id)_desiredKeysForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 languageCode:(id)arg3;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(_Bool)arg3 context:(id)arg4;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)keyValueRepresentationOfRecord:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (id)convertRecords:(id)arg1;
- (id)deleteRecordsWithIDs:(id)arg1;
- (void)updateFetchDateForRecordIDs:(id)arg1;
- (_Bool)isRecordStale:(id)arg1 withCachePolicy:(id)arg2;
- (_Bool)recognizesRecordID:(id)arg1;
- (id)_fetchErrorForKey:(id)arg1;
- (void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg1 treatmentID:(id)arg2;
- (void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;

@end
