/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, PFUbiquityContainerMonitor, PFUbiquityFilePresenter, PFUbiquityLocation, PFUbiquitySetupAssistant, PFUbiquitySwitchboardEntryMetadata;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardEntry : NSObject

{
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_storeURL;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    unsigned long long _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    _Bool _finishedSetupForStore;
    _Bool _hasScheduledFinishBlock;
    _Bool _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property unsigned long long activeStoreCount;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly) PFUbiquityLocation *localRootLocation;
@property (readonly) PFUbiquityFilePresenter *filePresenter;
@property (readonly) PFUbiquityFilePresenter *localFilePresenter;
@property (readonly) PFUbiquityContainerMonitor *monitor;
@property (readonly) PFUbiquitySetupAssistant *finishingSetupAssistant;
@property (retain, nonatomic) PFUbiquitySwitchboardEntryMetadata *metadata;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)unregisterPersistentStore:(id)arg1 inCoordinator:(id)arg2;
- (id)cacheWrapperForStoreName:(id)arg1;
- (id)metaForStoreName:(id)arg1;
- (void)executeBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 withURL:(id)arg3 ubiquityRootLocation:(id)arg4 andLocalRootLocation:(id)arg5;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)containerIdentifierChanged:(id)arg1;
- (void)setupFinished;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)containerStateChanged:(id)arg1;
- (void)monitorStateChanged:(id)arg1;
- (_Bool)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(_Bool)arg3 error:(id *)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(CDUnknownBlockType)arg2;

@end
