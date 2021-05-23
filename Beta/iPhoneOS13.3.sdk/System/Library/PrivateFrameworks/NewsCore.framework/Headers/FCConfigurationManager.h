/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, FCContextConfiguration, FCKeyValueStore, FCNewsAppConfig, NSArray, NSData, NSDictionary, NSHashTable, NSString, RCConfigurationManager;

@protocol FCCoreConfiguration, FCFeldsparIDProvider, FCNewsAppConfiguration, FCNewsAppConfiguration><FCJSONEncodableObjectProviding, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject

{
    _Bool _shouldIgnoreCache;
    _Bool _attemptedAppConfigFetch;
    _Bool _runningUnitTests;
    RCConfigurationManager *_remoteConfigurationManager;
    FCContextConfiguration *_contextConfiguration;
    id <FCFeldsparIDProvider> _feldsparIDProvider;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_appConfigFetchQueue;
    FCAsyncSerialQueue *_remoteConfigManagerSerialQueue;
    FCKeyValueStore *_localStore;
    FCNewsAppConfig *_currentAppConfiguration;
    NSArray *_treatmentIDs;
    NSArray *_segmentSetIDs;
    NSDictionary *_cachedWidgetConfigurationDict;
    NSData *_currentMagazinesConfiguration;
    NSHashTable *_appConfigObservers;
    NSHashTable *_coreConfigObservers;
}

@property (nonatomic, readonly) RCConfigurationManager *remoteConfigurationManager;
@property (nonatomic, readonly) FCContextConfiguration *contextConfiguration;
@property (nonatomic, readonly) id <FCFeldsparIDProvider> feldsparIDProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appConfigFetchQueue;
@property (nonatomic, readonly) FCAsyncSerialQueue *remoteConfigManagerSerialQueue;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (copy, nonatomic) FCNewsAppConfig *currentAppConfiguration;
@property (copy, nonatomic) NSArray *treatmentIDs;
@property (copy, nonatomic) NSArray *segmentSetIDs;
@property (nonatomic) _Bool shouldIgnoreCache;
@property (retain, nonatomic) NSDictionary *cachedWidgetConfigurationDict;
@property (copy, nonatomic) NSData *currentMagazinesConfiguration;
@property (retain, nonatomic) NSHashTable *appConfigObservers;
@property (retain, nonatomic) NSHashTable *coreConfigObservers;
@property (nonatomic) _Bool attemptedAppConfigFetch;
@property (nonatomic, getter=isRunningUnitTests) _Bool runningUnitTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <FCNewsAppConfiguration> appConfiguration;
@property (nonatomic, readonly) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property (copy, nonatomic, readonly) NSString *feldsparID;
@property (nonatomic, readonly) id <FCNewsAppConfiguration> fetchedAppConfiguration;
@property (nonatomic, readonly) id <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;
@property (nonatomic, readonly) id <FCCoreConfiguration> configuration;
@property (nonatomic, readonly) NSData *magazinesConfigurationData;

+ (id)internalOverrideSegmentSetIDs;
+ (id)internalOverrideAdditionalSegmentSetIDs;
+ (id)overrideAppConfigID;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initForTesting;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_storefrontID;
- (void)fetchConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_checkIfShouldIgnoreCache;
- (void)_loadConfigurationFromStore:(id)arg1;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteAppWidgetConfigurationIfNeededUseBackgroundRefreshRate:(_Bool)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_requestInfoForRequestKey:(id)arg1 storefrontID:(id)arg2 additionalChangeTags:(id)arg3;
- (id)_configurationSettingsWithRequestInfos:(id)arg1 feldsparID:(id)arg2 storefrontID:(id)arg3 contextConfiguration:(id)arg4 useBackgroundRefreshRate:(_Bool)arg5;
- (void)_refreshAppConfigurationWithConfigurationSettings:(id)arg1 force:(_Bool)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configurationDidChangeSignificantConfigChange:(_Bool)arg1;
- (id)_changeTagsInWidgetConfigurationDict:(id)arg1;
- (id)_mergeCachedDataWithWidgetConfigurationData:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_responseKeyForRequestKey:(id)arg1;
- (id)_permanentURLForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)arg1;
- (unsigned long long)_configurationSourceForSourceName:(id)arg1;
- (id)_recordIDForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (id)_mergeRecords:(id)arg1 withCachedRecords:(id)arg2;
- (id)_changeTagsInRecords:(id)arg1;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)arg1;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(CDUnknownBlockType)arg2;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)addAppConfigObserver:(id)arg1;
- (void)removeAppConfigObserver:(id)arg1;
- (void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3;

@end
