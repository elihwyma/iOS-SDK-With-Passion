/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSURL, WBSSQLiteDatabase;

@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject

{
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;

- (id)init;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (void)closeDatabase;
- (void)_openDatabase;
- (void)_closeDatabase;
- (void)getAllPreferenceInformationForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isDatabaseOpen;
- (int)_createFreshDatabaseSchema;
- (_Bool)_migrateToSchemaVersion:(int)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)removeAllPreferenceValuesFromPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getValueOfPreference:(long long)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getDefaultValueForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 forPreference:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTimestampAndValueOfPreference:(long long)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 includeTimestamp:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_openDatabaseIfNecessary;
- (void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;

@end
