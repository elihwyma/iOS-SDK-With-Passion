/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@interface WLKSettingsCloudUtilities : NSObject

+ (id)_queue;
+ (id)_connection;
+ (_Bool)cloudSyncEnabled;
+ (void)deleteAllHistoryWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)synchronizeSettingsFromCloudIfNeeded:(id *)arg1;
+ (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_syncDictionaryForLocalStore;
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 removeEntry:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_syncDictionaryForAppSettings:(id)arg1;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_fetchSyncDictionary:(CDUnknownBlockType)arg1;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;
+ (void)resetAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateLocalStoreWithCompletion:(CDUnknownBlockType)arg1;

@end
