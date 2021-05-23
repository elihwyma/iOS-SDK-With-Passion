/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseValueCache, HDProfile;

@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}

+ (_Bool)_isLocalDeviceBundleIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)createOrUpdateSourceForClient:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteSourcesWithUUIDs:(id)arg1 localSourceEntityCacheKey:(id)arg2 deleteSamples:(_Bool)arg3 database:(id)arg4 error:(id *)arg5;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id *)arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)localSourceForBundleIdentifier:(id)arg1 copyIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (_Bool)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id *)arg3;
- (_Bool)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)localSourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)allSourcesForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updateCurrentDeviceNameWithError:(id *)arg1;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)allSourcesWithError:(id *)arg1;
- (id)sourceEntityForClientSource:(id)arg1 createOrUpdateIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (id)localSourceForSourceID:(id)arg1 copyIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (id)localDeviceSourceWithError:(id *)arg1;
- (void)_applicationsUninstalledNotification:(id)arg1;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)arg1;
- (id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(CDUnknownBlockType)arg2 modifySourceBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(_Bool)arg2;
- (id)_createCopyOfFirstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_sourceFromEphemeralSource:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(_Bool)arg3 error:(id *)arg4;
- (id)_createSourceEntityForSpartanDeviceWithError:(id *)arg1;
- (id)_createSourceEntityForBundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 error:(id *)arg7;
- (id)clientSourcesForSourceIDs:(id)arg1 error:(id *)arg2;
- (id)_fetchClientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)_clientSourcesWithPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)_createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 sourceUUIDSToDelete:(id)arg3 deleteSamples:(_Bool)arg4 database:(id)arg5 error:(id *)arg6;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(_Bool)arg3 isDeleted:(_Bool *)arg4 error:(id *)arg5;
- (id)_sourceUUIDsForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)_bundleIDsWithoutLocalSourceForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_localSourcesForBundleIDs:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSourceWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteSourceIfNoSampleFound:(id)arg1;
- (id)privateSourceForClinicalAccountIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(_Bool)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id *)arg5;
- (id)publicSourceForGatewayExternalIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(_Bool)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id *)arg5;
- (id)sourceForClient:(id)arg1 error:(id *)arg2;
- (id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(_Bool)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id *)arg5;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(_Bool)arg5 error:(id *)arg6;
- (id)clientSourceForSourceEntities:(id)arg1 error:(id *)arg2;
- (id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)clientSourceForUUID:(id)arg1 error:(id *)arg2;
- (id)allWatchSourcesWithError:(id *)arg1;
- (id)_sourcePersistentIDsFromSourceEntities:(id)arg1;

@end
