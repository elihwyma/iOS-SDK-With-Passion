/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class BCCloudKitDatabaseController, BCCloudKitTransactionManager, BUCoalescingCallBlock, CKContainer;

@protocol BCContainerConfiguration, OS_dispatch_queue;

@interface BCCloudKitController : NSObject <Swift>

{
    _Bool _didChangeContainer;
    _Bool _gettingAccountInfo;
    _Bool _enableCloudSync;
    _Bool _serviceMode;
    BCCloudKitTransactionManager *_transactionManager;
    BCCloudKitDatabaseController *_privateCloudDatabaseController;
    id <BCContainerConfiguration> _configuration;
    CKContainer *_container;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BUCoalescingCallBlock *_coalescedAttachment;
}

@property (retain, nonatomic) BCCloudKitTransactionManager *transactionManager;
@property (retain, nonatomic) CKContainer *container;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) _Bool gettingAccountInfo;
@property (nonatomic) _Bool enableCloudSync;
@property (nonatomic) _Bool serviceMode;
@property (nonatomic) _Bool didChangeContainer;
@property (retain, nonatomic) id <BCContainerConfiguration> configuration;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment;

+ (id)sharedInstance;
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)secureSharedInstance;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;
+ (void)registerForSecureNotifications;
+ (id)databaseFolderURLForConfiguration:(id)arg1;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;

- (id)initWithConfiguration:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)p_accountChanged:(id)arg1;
- (void)p_identityChanged:(id)arg1;
- (void)p_updateAttachment;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEnableCloudSync:(_Bool)arg1 serviceMode:(_Bool)arg2;
- (void)handleRemoteNotification:(id)arg1;

@end
