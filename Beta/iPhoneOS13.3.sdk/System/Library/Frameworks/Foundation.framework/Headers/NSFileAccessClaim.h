/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSCountedSet, NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject <Swift>

{
    NSXPCConnection *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    _Bool _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    _Bool _didWait;
    _Bool _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSCountedSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;
    _Bool _hasInvokedClaimer;
    _Bool _shouldEnableMaterializationDuringAccessorBlock;
    id _claimerOrNil;
    CDUnknownBlockType _serverClaimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
    id _originatingReactorQueueID;
}

@property (readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter;
@property (copy, readonly) NSArray *allURLs;
@property _Bool shouldEnableMaterializationDuringAccessorBlock;

+ (_Bool)supportsSecureCoding;
+ (_Bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(_Bool)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5;
+ (_Bool)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (void)finished;
- (void)block;
- (id)client;
- (void)disavowed;
- (id)claimID;
- (_Bool)cameFromSuperarbiter;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (void)startObservingClientState;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)unblock;
- (void)revoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)isGranted;
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;
- (void)setCameFromSuperarbiter;
- (id)pendingClaims;
- (void)cancelled;
- (_Bool)isRevoked;
- (void)blockClaimerForReason:(id)arg1;
- (void)unblockClaimerForReason:(id)arg1;
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;
- (void)granted;
- (void)invokeClaimer;
- (_Bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (id)purposeID;
- (void)removePendingClaims:(id)arg1;
- (_Bool)isBlockedByClaimWithPurposeID:(id)arg1;
- (void)givePriorityToClaim:(id)arg1;
- (_Bool)shouldCancelInsteadOfWaiting;
- (void)setClaimerError:(id)arg1;
- (void)addPendingClaim:(id)arg1;
- (void)scheduleBlockedClaim:(id)arg1;
- (_Bool)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)addBlockingReactorID:(id)arg1;
- (void)removeBlockingReactorID:(id)arg1;
- (id)claimerError;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long *)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (void)devalueSelf;
- (_Bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;
- (_Bool)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;
- (_Bool)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (int)clientProcessIdentifier;
- (_Bool)didWait;
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long *)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long *)arg4 thenContinue:(CDUnknownBlockType)arg5;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(_Bool)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;
- (_Bool)canAccessLocations:(id)arg1 forReading:(_Bool)arg2 error:(id *)arg3;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)devalueOldClaim:(id)arg1;
- (_Bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;

@end
