/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;

@protocol OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject

{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    const char *_actualPath;
    struct __CFSet *_observingConnections;
    NSObject<OS_os_transaction> *_dirtyTransaction;
    struct os_unfair_lock_s _observingConnectionsLock;
    struct os_unfair_lock_s _writeLock;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _fileProtectionClass;
    short _generationShmemIndex;
    _Bool _handlingRequest;
    _Bool _dirty;
    _Bool _byHost;
    _Bool _managed;
    _Bool _managedUsesContainer;
    _Bool _neverCache;
    _Bool _checkedForNonPrefsPlist;
    _Bool _restrictedReadability;
    _Bool _waitingForDeviceUnlock;
    _Bool _watchingParentDirectory;
    _Bool _disableBackup;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (void)setManagedPreferencesUseContainer:(_Bool)arg1;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (_Bool)shouldBePurgable;
- (void)tryEndAccessingPlist;
- (void)cacheActualPathCreatingIfNecessary:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 isWritable:(_Bool *)arg4;
- (_Bool)getUncanonicalizedPath:(char *)arg1;
- (void)handleDeviceUnlock;
- (struct __CFString *)container;
- (void)syncWriteToDiskAndFlushCache;
- (void)updateShmemEntry;
- (void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2;
- (struct __CFString *)debugDump;
- (void)setDirty:(_Bool)arg1;
- (void)drainPendingChanges;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (void)cleanUpIfNecessaryAfterCreatingPlist;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)handleWritingFailureWithError:(int)arg1;
- (void)syncWriteToDisk;
- (void)clearCache;
- (CDUnknownBlockType)createDiskWriteShouldPerformSynchronously:(_Bool *)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)cacheActualPath;
- (struct __CFString *)user;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(_Bool)arg1;
- (_Bool)hasObservers;
- (struct __CFString *)cloudConfigurationPath;
- (void)observingConnectionsLockedSync:(CDUnknownBlockType)arg1;
- (void)stopNotifyingObserver:(id)arg1;
- (void)setPlist:(id)arg1;
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4;
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;
- (_Bool)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (_Bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (int)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(_Bool *)arg3;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;
- (void)handleAvoidCache;
- (void)handleEUIDorEGIDMismatch;
- (int)cloneAndOpenPropertyListWithoutDrainingPendingChangesOrValidatingPlist;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(_Bool)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (unsigned long long)approximatePlistSizeIncludingPendingChanges;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2;
- (void)handleSynchronous;
- (void)handleNoPlistFound;
- (void)setObserved:(_Bool)arg1 bySenderOfMessage:(id)arg2;
- (void)handleNeverCache;
- (void)beginHandlingRequest;
- (void)endHandlingRequest;
- (struct __CFString *)copyUncanonicalizedPath;
- (_Bool)managed;
- (struct __CFString *)domain;
- (void)respondToFileWrittenToBehindOurBack;
- (_Bool)byHost;
- (short)shmemIndex;
- (void)finishedNonRequestWriteWithError:(int)arg1;
- (void)observingConnectionWasInvalidated:(id)arg1;
- (id)acceptMessage:(id)arg1;
- (void)cleanUpAfterAcceptingMessage:(id)arg1;

@end
