/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, CKSyncEngine, CKUploadRequestManagerInternals, CKUploadRequestPersistentStore, NSString;

@interface CKUploadRequestManager : NSObject

{
    CKUploadRequestManagerInternals *_internals;
}

@property (nonatomic, readonly) CKUploadRequestManagerInternals *internals;
@property (nonatomic, readonly) CKSyncEngine *repairZoneSyncEngine;
@property (nonatomic, readonly) CKContainer *repairContainer;
@property (nonatomic, readonly) CKUploadRequestPersistentStore *database;
@property (copy) CDUnknownBlockType assetRequestCallback;
@property (copy) CDUnknownBlockType packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (nonatomic, readonly) NSString *activityIdentifierForSchedulingRepairs;

+ (double)recurringFetchPeriod;
+ (double)tryAgainLaterRetryTime;
+ (double)retryableErrorRetryTime;
+ (double)cancelledErrorRetryTime;
+ (double)retryableErrorMaxRetryCount;
+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;

- (void)dealloc;
- (void)cancelAllOperations;
- (void)unregister;
- (void)registerForItemRequests;
- (void)manuallyTriggerUploadRequests;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;
- (void)scheduleOrInvokeRepairsNow;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;

@end
