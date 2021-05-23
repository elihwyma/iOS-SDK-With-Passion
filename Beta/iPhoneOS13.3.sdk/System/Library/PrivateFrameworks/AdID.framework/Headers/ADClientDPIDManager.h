/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKRecordID, CKRecordZoneID, NSDate, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject

{
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
    _Bool _isTest;
    _Bool _isPrivateContainerSecure;
    _Bool _updateInProgress;
    _Bool _sandboxEnvironment;
    _Bool _supportsDeviceToDeviceEncryption;
    unsigned long long _dpidReconcileState;
    NSDate *_dpidReconcileStartDate;
    CKRecordZoneID *_zoneID;
    CKRecordID *_recordID;
    CKContainer *_privateContainer;
    long long _qualityOfService;
    NSString *_DPID;
    NSMutableArray *_operationsInProgress;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKContainer *privateContainer;
@property (nonatomic) _Bool isPrivateContainerSecure;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *DPID;
@property (nonatomic) _Bool updateInProgress;
@property (retain, nonatomic) NSMutableArray *operationsInProgress;
@property (nonatomic) _Bool sandboxEnvironment;
@property (nonatomic) _Bool supportsDeviceToDeviceEncryption;
@property unsigned long long dpidReconcileState;
@property (retain) NSDate *dpidReconcileStartDate;
@property (nonatomic, readonly) _Bool isTest;

+ (id)sharedInstance;
+ (id)DPIDOperationTypeToString:(unsigned long long)arg1;

- (id)init;
- (id)subscriptionIdentifier;
- (id)secureContainer;
- (void)startOperation:(unsigned long long)arg1;
- (_Bool)isRestrictedByApple;
- (void)finishOperation:(unsigned long long)arg1;
- (void)updateActiveRecordICloudDSID;
- (void)setupLocalDPID;
- (_Bool)shouldSyncDPID;
- (void)backupFlowForCloudKitWorkAtTime:(id)arg1 with:(CDUnknownBlockType)arg2;
- (_Bool)canContinueProcessing:(id)arg1;
- (id)insecureContainer;
- (void)resolveAccountVsStoredManateeState:(long long)arg1 andError:(id)arg2 with:(CDUnknownBlockType)arg3;
- (void)continueReconcileWithAccountStatus:(long long)arg1 andError:(id)arg2 with:(CDUnknownBlockType)arg3;
- (_Bool)iCloudAccountSubscribed;
- (void)syncDPIDWithiCloud:(CDUnknownBlockType)arg1;
- (void)setupiCloudSubscription:(CDUnknownBlockType)arg1;
- (void)retryIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)canGenerateDPID;
- (void)removeDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (id)generateDPID;
- (void)saveDPIDtoiCloud:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)primaryiCloudAccountAltDSID;
- (_Bool)limitAdTrackingEnabled;
- (id)operationQueueLog;
- (id)containerWithIDString:(id)arg1;
- (void)writeDPIDtoKeychain;
- (_Bool)isLoggedIntoiTunes;
- (void)fetchDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (void)setiCloudAccountSubscribed:(_Bool)arg1;
- (void)createErrorForPrivateDB:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleCloudKitError:(id)arg1;
- (void)resetEncryptedZone:(CDUnknownBlockType)arg1;
- (void)reconcileDPID:(CDUnknownBlockType)arg1;
- (void)handlePushNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetDPID:(CDUnknownBlockType)arg1;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)teardowniCloudSubscription:(CDUnknownBlockType)arg1;

@end
