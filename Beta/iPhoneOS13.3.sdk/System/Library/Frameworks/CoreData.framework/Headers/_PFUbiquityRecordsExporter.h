/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDate, NSLock, NSMutableDictionary, NSString, PFUbiquityLocation;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsExporter : NSObject

{
    NSString *_localPeerID;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_storeName;
    NSLock *_transactionLock;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    _Bool _pendingTempLogMove;
    _Bool _allowTempLogStorage;
    _Bool _useLocalStorage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _throwOptimisticLockingException;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) PFUbiquityLocation *localRootLocation;
@property (nonatomic, readonly) PFUbiquityLocation *currentRootLocation;
@property (retain) NSDate *lastTransactionDate;
@property (nonatomic, readonly) _Bool pendingTempLogMove;
@property (nonatomic) _Bool allowTempLogStorage;
@property (nonatomic) _Bool useLocalStorage;
@property (nonatomic) _Bool throwOptimisticLockingException;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (_Bool)shouldRespondToSaveNotification:(id)arg1;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (id)createArrayForExternalDataReferencesInSaveNotification:(id)arg1 withExportContext:(id)arg2 andSaveSnapshot:(id)arg3;
- (void)scheduleTempLogMove;
- (void)moveLogsFromTempDirectory;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5;
- (void)beginWatchingForChangesFromStore:(id)arg1;
- (void)stopWatchingForChanges;

@end
