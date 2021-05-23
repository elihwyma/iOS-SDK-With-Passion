/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileReactorProxy.h>

@class NSFileAccessProcessManager, NSFilePresenterXPCMessenger, NSFileWatcher, NSMutableArray, NSObject, NSSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy

{
    id _remotePresenter;
    NSFilePresenterXPCMessenger *_forwardedMessenger;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    NSMutableArray *_previousWriterPurposeIDs;
    NSFileAccessProcessManager *_processManager;
    NSSet *_observedUbiquityAttributes;
    unsigned long long _filePresenterResponses;
    _Bool _didObserveMovingByWriter;
    _Bool _didObserveVersionChangingByWriter;
    _Bool _disconnected;
    _Bool _inSubarbiter;
    _Bool _usesMainThreadDuringRelinquishing;
    _Bool _didObserveNonCoordinatedChanges;
}

@property (readonly) _Bool disconnected;
@property _Bool inSubarbiter;
@property _Bool usesMainThreadDuringReliquishing;
@property (copy) NSSet *observedUbiquityAttributes;
@property (nonatomic) unsigned long long filePresenterResponses;

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;

- (void)dealloc;
- (void)invalidate;
- (void)setItemLocation:(id)arg1;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2;
- (void)promisedFileWasFulfilled;
- (void)localFileWasEvicted;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(CDUnknownBlockType)arg3;
- (void)startObservingApplicationStateWithQueue:(id)arg1;
- (void)stopObservingApplicationState;
- (id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3;
- (_Bool)allowedForURL:(id)arg1;
- (void)forwardUsingProxy:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeChangeOfUbiquityAttributes:(id)arg1;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeChangeAtSubitemPath:(id)arg1;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_clientProxy;
- (void)observeNewProvider:(id)arg1;
- (void)observePresenterChange:(_Bool)arg1 atSubitemURL:(id)arg2;
- (void)_settleNonCoordinatedChanges;
- (_Bool)shouldSendObservationMessageWithPurposeID:(id)arg1;
- (void)forwardRelinquishmentForWritingClaim:(_Bool)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)disconnect;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
