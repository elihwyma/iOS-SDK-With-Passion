/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, PGGraphUpdateJetsamIndicator, PGGraphUpdateManagerTargetTokenState, PGLibraryChangeListener, PGManager, PGPhotoChangeToGraphChangeConverter;

@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGGraphUpdateManager : NSObject

{
    unsigned char _processingState;
    _Bool _stopRequested;
    _Bool _listening;
    NSMutableSet *_listeners;
    PGLibraryChangeListener *_libraryChangeListener;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PGPhotoChangeToGraphChangeConverter *_changeConverter;
    PGManager *_manager;
    NSMutableArray *_pendingChanges;
    PGGraphUpdateJetsamIndicator *_jetsamIndicator;
    PGGraphUpdateManagerTargetTokenState *_targetTokenState;
    long long _executionContext;
    id <PGGraphUpdateHealthRecording> _updateHealthRecorder;
}

@property (retain, nonatomic) PGLibraryChangeListener *libraryChangeListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) PGPhotoChangeToGraphChangeConverter *changeConverter;
@property (nonatomic) unsigned char processingState;
@property (retain, nonatomic) NSMutableArray *pendingChanges;
@property (nonatomic, getter=isListening) _Bool listening;
@property (nonatomic) _Bool stopRequested;
@property (retain, nonatomic) PGGraphUpdateManagerTargetTokenState *targetTokenState;
@property (nonatomic, readonly) NSMutableSet *listeners;
@property (nonatomic, readonly) PGGraphUpdateJetsamIndicator *jetsamIndicator;
@property (nonatomic, readonly) id <PGGraphUpdateHealthRecording> updateHealthRecorder;
@property (nonatomic, readonly) _Bool isConsistencyUpdate;
@property (nonatomic, readonly) PGManager *manager;
@property long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_startListening;
- (void)startListening;
- (void)stopListening;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_processPendingChanges;
- (void)_notifyProgress:(double)arg1;
- (id)initWithGraphManager:(id)arg1;
- (void)performFullRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performLightWeightRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)libraryChangesAvailable:(id)arg1;
- (void)incrementalChangeNotAvailable;
- (void)_performRebuildWithGraphIngestRecipe:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_onStopRequestedWasListening:(_Bool)arg1;
- (void)_signalGraphIsConsistentWithTokens:(id)arg1;
- (void)_onEncounteredTargetToken;
- (void)_notifyListeners:(id)arg1 notificationType:(unsigned char)arg2;
- (_Bool)_pauseListening;
- (id)_tokensForChanges:(id)arg1;
- (void)_processRebuild;
- (void)_onFinishedProcessingChangesWithTokens:(id)arg1;
- (void)_triggerFullRebuildDuringLiveUpdate:(_Bool)arg1 graphIngestRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 keepExistingGraph:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_triggerUpdateForGraphUpdate:(id)arg1;
- (_Bool)_performEnrichmentWithGraphUpdateInventory:(id)arg1 enrichmentContext:(long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_graphUpdateForPhotoChanges:(id)arg1;
- (void)_recordInformationFromDatabaseChange:(id)arg1;
- (void)_recordInformationFromGraphChanges:(id)arg1;

@end
