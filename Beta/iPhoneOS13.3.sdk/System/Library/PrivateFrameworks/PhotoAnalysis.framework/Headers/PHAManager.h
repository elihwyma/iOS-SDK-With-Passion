/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, PHAAssetResourceDataLoader, PHAExecutive, PHAGraphManager, PHAJobCoordinator, PHAMonitoring, PHPhotoLibrary;

@interface PHAManager : NSObject

{
    PHAMonitoring *_monitoring;
    PHAExecutive *_executive;
    PHAAssetResourceDataLoader *_dataLoader;
    unsigned long long _processedAssetCount;
    PHAGraphManager *_graphManager;
    NSURL *_libraryURL;
    PHPhotoLibrary *_photoLibrary;
    PHAJobCoordinator *_jobCoordinator;
    NSMutableDictionary *_photoAnalysisWorkersByType;
}

@property (retain) NSURL *libraryURL;
@property (retain) PHPhotoLibrary *photoLibrary;
@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) _Bool quiescent;
@property (readonly) PHAGraphManager *graphManager;

+ (void)enumerateWorkerClassesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)allWorkerClasses;

- (id)init;
- (id)description;
- (void)shutdown;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reportTurboEnabledWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)turboIsEnabled;
- (id)monitoring;
- (void)handleOperation:(id)arg1;
- (id)statusAsDictionary;
- (void)graphManagerWillLoadGraph:(id)arg1;
- (void)graphManagerDidUnloadGraph:(id)arg1;
- (void)triggerBackgroundActivity;
- (void)stopAllBackgroundActivities;
- (id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2;
- (void)startTurboProcessing;
- (void)enableTurboMode;
- (void)disableTurboMode;
- (void)turboConstraintsWereRemoved;
- (_Bool)photosIsConnected;
- (_Bool)isInitialSyncActive;
- (void)checkForQuiescence;
- (void)stopBackgroundActivity;
- (void)backgroundActivityDidBegin;
- (id)graphServiceWorker;
- (id)faceClassificationServiceWorker;
- (id)faceProcessingServiceWorker;
- (void)enumerateWorkersUsingBlock:(CDUnknownBlockType)arg1;

@end
