/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, CKSQLite, CKSQLitePool, NSDate;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDRecordCache : NSObject

{
    CKSQLite *_db;
    CKSQLitePool *_dbPool;
    CKDClientContext *_context;
    long long _scope;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastExpiryAttempt;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CKSQLite *db;
@property (retain, nonatomic) CKSQLitePool *dbPool;
@property (retain, nonatomic) CKDClientContext *context;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSDate *lastExpiryAttempt;

+ (id)_expiryDateFormatter;

- (void)open;
- (void)close;
- (id)_dsid;
- (unsigned long long)recordCacheSizeLimit;
- (_Bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (_Bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (void)_attemptRecordExpiryIfNeeded;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (void)clearAssetAuthTokensForRecord:(id)arg1;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4;
- (void)releaseDatabase;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (unsigned long long)numberOfRecordsWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (void)deleteRecordWithID:(id)arg1;
- (void)clearAllRecordsInScope;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;

@end
