/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

{
    NSString *_cachedSalt;
    NSObject<OS_dispatch_queue> *_ckQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_container;
- (void)_scheduleOperation:(id)arg1;
- (void)clearLocalSyncState;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1 forceFetch:(_Bool)arg2;
- (id)_CKUtilitiesSharedInstance;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteDeDupeRecordZone;

@end
