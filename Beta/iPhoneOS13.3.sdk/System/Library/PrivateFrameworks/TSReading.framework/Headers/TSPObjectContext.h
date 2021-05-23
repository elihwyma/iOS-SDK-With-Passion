/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSData, NSMapTable, NSRecursiveLock, NSString, NSURL, NSUUID, SFUCryptoKey, TSPDataManager, TSPObject, TSPObjectContainer, TSUTemporaryDirectory;

@protocol OS_dispatch_group, OS_dispatch_queue, TSPObjectContextDelegate;

@interface TSPObjectContext : NSObject <Swift>

{
    long long _lastObjectIdentifier;
    long long _modifyObjectToken;
    int _modifyObjectCount;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    NSURL *_supportURL;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_documentResourceDataProviderQueue;
    _Bool _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    _Bool _isDocumentModified;
    _Bool _isSupportModified;
    _Bool _isPasswordProtected;
    _Bool _documentHasCurrentFileFormatVersion;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id <TSPObjectContextDelegate> _delegate;
    TSPDataManager *_dataManager;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    NSData *_passwordVerifier;
    NSUUID *_documentUUID;
    NSUUID *_versionUUID;
    TSPObject *_supportObject;
}

@property (nonatomic, readonly) _Bool ignoreDocumentSupport;
@property (nonatomic, readonly) _Bool isDocumentSupportTemporary;
@property (nonatomic, readonly) _Bool ignoreUnknownContentWhileReading;
@property (nonatomic, readonly) _Bool ignoreVersionCheckingWhileReading;
@property (nonatomic, readonly) _Bool ignoreDocumentResourcesWhileReading;
@property (nonatomic, readonly) TSPDataManager *dataManager;
@property (retain, nonatomic) TSPObjectContainer *documentObjectContainer;
@property (retain, nonatomic) TSPObjectContainer *supportObjectContainer;
@property (nonatomic, readonly) _Bool documentHasCurrentFileFormatVersion;
@property (nonatomic) long long lastObjectIdentifier;
@property (retain, nonatomic) NSData *passwordVerifier;
@property (nonatomic, readonly) _Bool areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *documentUUID;
@property (nonatomic, readonly) NSUUID *versionUUID;
@property (retain, nonatomic) TSPObject *supportObject;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;
@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic) _Bool isDocumentModified;
@property (nonatomic) _Bool isSupportModified;
@property (nonatomic) _Bool isPasswordProtected;
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (nonatomic, readonly) TSPObject *documentObject;
@property (weak, nonatomic) id <TSPObjectContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) _Bool needsDownload;
@property (nonatomic, readonly) long long estimatedDownloadSize;
@property (nonatomic, readonly) _Bool isEstimatedDownloadSizePrecise;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic, readonly) NSString *service;

+ (void)waitForPendingEndSaveGroup:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)close;
- (id)temporaryDirectory;
- (id).cxx_construct;
- (id)initWithDelegate:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (id)documentRoot;
- (long long)modifyObjectTokenForNewObject;
- (void)setDocumentObject:(id)arg1;
- (long long)newObjectIdentifier;
- (_Bool)areExternalReferencesSupported;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
- (id)supportDirectoryURL;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (void)beginWriteOperation;
- (void)endWriteOperation;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)beginAssertOnModify;
- (void)endAssertOnModify;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (void)beginIgnoringCachedObjectEviction;
- (void)endIgnoringCachedObjectEviction;
- (void)didMoveToURL:(id)arg1;
- (void)didMoveSupportToURL:(id)arg1;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)waitForSaveToFinishIfNeeded;
- (void)didReadDocumentObject:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
- (long long)updateModifyObjectToken;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (void)runObjectNotificationsInQueue:(id)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;

@end
