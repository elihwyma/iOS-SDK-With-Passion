/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDDomainIndexer, FPDProvider, FPPacer, FPProviderDomain, NSArray, NSData, NSDictionary, NSFileProviderDomain, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, NSURL;

@protocol FPDDomainBackend, FPDDomainIndexChangeDelegate, FPDExtensionSessionProtocol, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface FPDDomain : NSObject

{
    NSMutableDictionary *_coordinatorMetadataPerURL;
    NSOperationQueue *_providedItemsOperationQueue;
    NSDictionary *_fileCoordinationProviderByURL;
    id <FPDExtensionSessionProtocol> _session;
    Class _fpfsClass;
    _Bool _cantStartup;
    _Bool _isObservingRoot;
    _Bool _indexerStarted;
    _Bool _isUsingFPFS;
    _Bool _invalidated;
    NSObject<OS_dispatch_source> *_timer;
    NSURL *_previouslyAccessedSecurityScopedURL;
    FPPacer *_rootCreationPacer;
    _Bool _started;
    _Bool _userEnabled;
    _Bool _ejectable;
    _Bool _unableToStartup;
    _Bool _forceNoFPFSForTesting;
    id <FPDDomainIndexChangeDelegate> _indexChangeDelegate;
    NSString *_identifier;
    NSFileProviderDomain *_nsDomainOrNilForDefault;
    NSFileProviderDomain *_nsDomain;
    NSNumber *_shouldDropIndexOrNil;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_os_log> *_log;
    NSArray *_extensionStorageURLs;
    NSString *_purposeIdentifier;
    id <FPDDomainBackend> _defaultBackend;
    id <FPDDomainBackend> _extensionBackend;
    id <FPDDomainBackend> _deactivatedBackend;
    FPDProvider *_provider;
    NSMutableDictionary *_filePresenters;
    FPDDomainIndexer *_indexer;
    NSData *_fpfsRootBookmarkData;
}

@property (weak, nonatomic) id <FPDDomainIndexChangeDelegate> indexChangeDelegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) FPProviderDomain *providerDomain;
@property (nonatomic) _Bool started;
@property (retain, nonatomic) NSFileProviderDomain *nsDomainOrNilForDefault;
@property (nonatomic, readonly) NSFileProviderDomain *nsDomain;
@property (nonatomic) _Bool userEnabled;
@property (nonatomic) _Bool ejectable;
@property (nonatomic) _Bool unableToStartup;
@property (nonatomic, readonly) _Bool isConnectedToAppExtension;
@property (retain, nonatomic) NSNumber *shouldDropIndexOrNil;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) FPDDomain *domainIfNotDisabledByFPFSSettings;
@property (nonatomic, readonly) NSArray *rootURLs;
@property (nonatomic, readonly) NSArray *extensionStorageURLs;
@property (nonatomic, readonly) NSString *purposeIdentifier;
@property (retain, nonatomic) id <FPDDomainBackend> defaultBackend;
@property (nonatomic, readonly) id <FPDDomainBackend> extensionBackend;
@property (nonatomic, readonly) id <FPDDomainBackend> deactivatedBackend;
@property (weak, nonatomic, readonly) FPDProvider *provider;
@property (nonatomic, readonly) id <FPDExtensionSessionProtocol> session;
@property (retain, nonatomic) NSMutableDictionary *filePresenters;
@property (retain, nonatomic) FPDDomainIndexer *indexer;
@property (retain, nonatomic) NSData *fpfsRootBookmarkData;
@property (nonatomic) _Bool forceNoFPFSForTesting;
@property (nonatomic, readonly) NSString *fp_prettyDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)_fileReactorID;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (id)_providedItemsOperationQueue;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_physicalURLForURL:(id)arg1;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (void)finishSetup;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateSession;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsFPFS;
- (void)didChangeItemID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchEnumeratorWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 lifetimeExtender:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)isProviderForURL:(id)arg1;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2;
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)materializedURLForItemID:(id)arg1;
- (void)forceIngestionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceFSIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)nonEvictableSpace;
- (void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_siblingDelegateForURL:(id)arg1;
- (_Bool)isUsingFPFS;
- (void)createRootAndObserveIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldDisconnect;
- (_Bool)_shouldDisconnectDueToLowDiskSpace;
- (void)_setupRecoveryTimer;
- (_Bool)isDefaultDomain;
- (_Bool)isHiddenDefaultDomain;
- (void)_registerFileCoordinatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startObservingRootAndResumeIndexerWithCompletion:(CDUnknownBlockType)arg1;
- (void)createRootURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelPendingCoordinations;
- (void)_unregisterFromFileCoordinator;
- (id)_removeProgressForProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)daemonSideItemChange:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_wantsPresenterNotifications;
- (void)workingSetDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)extensionIndexer:(id)arg1 didChangeNeedsAuthentification:(_Bool)arg2;
- (void)extensionIndexer:(id)arg1 didIndexOneBatchWithError:(id)arg2 updatedItems:(id)arg3 deletedIDs:(id)arg4 anchor:(id)arg5 anchorPersisted:(CDUnknownBlockType)arg6;
- (id)initWithIdentifier:(id)arg1 nsDomain:(id)arg2 extensionStorageURLs:(id)arg3 purposeIdentifier:(id)arg4 fpfsClass:(Class)arg5 provider:(id)arg6;
- (_Bool)createRootByImportingDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (void)startInOrderToDropIndex;
- (void)cleanupDomainKeepingArchiveFolder:(_Bool)arg1;
- (void)dumpInternalStateTo:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
