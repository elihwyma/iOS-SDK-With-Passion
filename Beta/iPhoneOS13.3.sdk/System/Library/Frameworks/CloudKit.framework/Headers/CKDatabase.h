/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface CKDatabase : NSObject

{
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingDispatchQueue;
}

@property (weak, nonatomic) CKContainer *container;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (nonatomic, readonly) long long databaseScope;

- (id)init;
- (id)description;
- (void)addOperation:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)CKStatusReportArray;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)showAssetCache;
- (void)clearRecordCache;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
