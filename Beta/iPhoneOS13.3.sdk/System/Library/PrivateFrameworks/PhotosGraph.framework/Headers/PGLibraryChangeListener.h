/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString, PGLibraryChangeListenerStateStore, PHPersistentChangeToken, PHPhotoLibrary;

@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGLibraryChangeListener : NSObject

{
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
    _Bool _libraryBecameUnavailable;
    NSString *_clientIdentifier;
    PHPhotoLibrary *_photoLibrary;
    PGLibraryChangeListenerStateStore *_stateStore;
    NSHashTable *_changeConsumers;
    NSMutableOrderedSet *_outstandingChangeTokens;
    NSMapTable *_outstandingChangeTokensByConsumer;
    NSCountedSet *_outstandingChangeTokenCounts;
    unsigned long long _outstandingTokensHighWaterMark;
    unsigned long long _outstandingTokensLowWaterMark;
    unsigned long long _maximumNumberOfMutationsToFetch;
    unsigned long long _mode;
    PHPersistentChangeToken *_lastReadToken;
    id <PGGraphUpdateHealthRecording> _updateHealthRecorder;
}

@property (weak, nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PGLibraryChangeListenerStateStore *stateStore;
@property (nonatomic, readonly) NSHashTable *changeConsumers;
@property (nonatomic, readonly) NSMutableOrderedSet *outstandingChangeTokens;
@property (nonatomic, readonly) NSMapTable *outstandingChangeTokensByConsumer;
@property (nonatomic, readonly) NSCountedSet *outstandingChangeTokenCounts;
@property (nonatomic, readonly) unsigned long long outstandingTokensHighWaterMark;
@property (nonatomic, readonly) unsigned long long outstandingTokensLowWaterMark;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMutationsToFetch;
@property unsigned long long mode;
@property (retain, nonatomic) PHPersistentChangeToken *lastReadToken;
@property (nonatomic, readonly) id <PGGraphUpdateHealthRecording> updateHealthRecorder;
@property _Bool libraryBecameUnavailable;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) PHPersistentChangeToken *currentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startListening;
- (void)stopListening;
- (void)photoLibraryDidChange:(id)arg1;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2;
- (void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2;
- (void)registerChangeConsumer:(id)arg1;
- (void)unregisterChangeConsumer:(id)arg1;
- (void)persistToken:(id)arg1;
- (void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1;
- (id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(_Bool)arg4;
- (void)_clearConsumerTokenState;
- (_Bool)_distributeChangesInFetchResult:(id)arg1;

@end
