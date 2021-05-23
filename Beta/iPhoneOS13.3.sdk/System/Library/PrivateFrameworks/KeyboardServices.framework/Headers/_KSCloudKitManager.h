/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString, _KSRequestThrottle;

@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

@interface _KSCloudKitManager : NSObject

{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
    _Bool _recordZoneOperationInProgress;
    _Bool _subscriptionOperationInProgress;
    CKRecordZone *_recordZone;
    id <_KSCloudKitManagerDelegate> _delegate;
    CKContainer *_cloudKitContainer;
    CKDatabase *_cloudKitDatabase;
    CKDatabase *_publicDatabase;
    NSString *_recordZoneKey;
    NSString *_subscriptionKey;
    NSString *_lastKnownUserKey;
}

@property (retain, nonatomic) CKContainer *cloudKitContainer;
@property (retain, nonatomic) CKDatabase *cloudKitDatabase;
@property (retain, nonatomic) CKDatabase *publicDatabase;
@property (nonatomic, readonly) NSString *recordZoneKey;
@property (nonatomic, readonly) NSString *subscriptionKey;
@property (nonatomic, readonly) NSString *lastKnownUserKey;
@property (nonatomic) _Bool recordZoneOperationInProgress;
@property (nonatomic) _Bool subscriptionOperationInProgress;
@property (retain, nonatomic) CKRecordZone *recordZone;
@property (weak, nonatomic) id <_KSCloudKitManagerDelegate> delegate;

+ (id)prepareContainerForID:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;
- (id)userIdentity;
- (_Bool)isAccountAvailable;
- (id)initWithRecordZoneName:(id)arg1;
- (void)accountStatusDidChange:(id)arg1;
- (_Bool)needsDeviceToDevice;
- (void)identityUpdated:(id)arg1;
- (void)setupAccountDidChange:(_Bool)arg1;
- (id)initWithContainer:(id)arg1 recordZoneName:(id)arg2;
- (void)setupSubscription;
- (void)setupRecordZoneWithCompletionHandler:(CDUnknownBlockType)arg1 ignoreDefaults:(_Bool)arg2;
- (void)queryAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;
- (void)_ckSaveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4;
- (void)addOperation:(id)arg1 priority:(unsigned long long)arg2;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (id)resolveConflicts:(id)arg1;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 retryCount:(unsigned long long)arg4;
- (void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (void)_inconvenientOperation:(id)arg1;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3;
- (id)recordIDForName:(id)arg1;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
