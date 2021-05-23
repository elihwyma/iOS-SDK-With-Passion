/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIDocument.h>

#import <TSReading/Swift-Protocol.h>

@class NSObject, NSString, NSURL, SFUCryptoKey, TIADocumentInfo, TSADocumentRoot, TSPObjectContext;

@protocol NSFilePresenter, OS_dispatch_queue, TIADocumentPassphraseDelegate;

@interface TIADocument : UIDocument <Swift>

{
    int _hasPersistenceErrors;
    TSADocumentRoot *_documentRootForDocumentDidLoad;
    TSADocumentRoot *_suspendedDocumentRoot;
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioOperationQueue;
    id _documentStateChangedObserver;
    _Bool _passwordEntryWasAbandoned;
    _Bool _isShowingConflictResolutionSheet;
    _Bool _isClosingWithoutSaving;
    _Bool _isReadOnly;
    _Bool _documentNeedsDownloadOnRevert;
    _Bool _documentRevertWasAbandoned;
    TIADocumentInfo *_documentInfo;
    id <TIADocumentPassphraseDelegate> _passphraseDelegate;
    SFUCryptoKey *_encryptionKey;
    NSString *_sourcePathForNondestructiveImport;
    TSPObjectContext *_contextForRevert;
    NSURL *_templateURL;
}

@property (retain, nonatomic) TSPObjectContext *context;
@property (retain, nonatomic) TSPObjectContext *contextForRevert;
@property (retain, nonatomic) TIADocumentInfo *documentInfo;
@property (copy, nonatomic) NSURL *templateURL;
@property (retain, nonatomic) SFUCryptoKey *encryptionKey;
@property _Bool isReadOnly;
@property _Bool isClosingWithoutSaving;
@property (nonatomic, readonly) _Bool isClosed;
@property (readonly) _Bool passwordEntryWasAbandoned;
@property (readonly) _Bool documentNeedsDownloadOnRevert;
@property (readonly) _Bool documentRevertWasAbandoned;
@property (readonly) _Bool shouldHideForSnapshots;
@property (retain, nonatomic, readonly) TSADocumentRoot *documentRoot;
@property (readonly) _Bool isShowingConflictResolutionSheet;
@property (readonly) _Bool hasPersistenceErrors;
@property (nonatomic, readonly) _Bool isPasswordProtected;
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (nonatomic) id <TIADocumentPassphraseDelegate> passphraseDelegate;
@property (retain, nonatomic) NSString *sourcePathForNondestructiveImport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (nonatomic, readonly) NSString *documentCachePath;
@property (nonatomic, readonly) id <NSFilePresenter> filePresenter;
@property (nonatomic, readonly) _Bool ignoreDocumentSupport;
@property (nonatomic, readonly) _Bool isDocumentSupportTemporary;
@property (nonatomic, readonly) _Bool areNewExternalReferencesToDataAllowed;

- (void)dealloc;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (_Bool)hasUnsavedChanges;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)documentDidLoad;
- (id)documentUUID;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
- (void)decryptedDocumentWithKey:(id)arg1;
- (id)packageDataForWrite;
- (id)additionalDocumentPropertiesForWrite;
- (void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (void)setFileProtectionTo:(id)arg1 atPath:(id)arg2;
- (id)initWithTemporaryFileURL:(id)arg1;
- (void)p_performSynchronousBlockOnMainThread:(CDUnknownBlockType)arg1;
- (_Bool)shouldAbandonDocumentRevert;
- (void)passwordStateDidChange;
- (void)coordinatedReadUsingAccessor:(CDUnknownBlockType)arg1;
- (_Bool)_shouldPreventFileProtectionUpgradeToLevel:(id)arg1;
- (void)setDocumentFileProtectionTo:(id)arg1;
- (void)setEncryptionKeyWithPassphrase:(id)arg1;
- (_Bool)validatePassphrase:(id)arg1;

@end
