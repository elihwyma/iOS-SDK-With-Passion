/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PFSerialQueue, PHAManager, PHAServiceCancelableOperation, PHPhotoLibrary;

@protocol PHAAssetResourceDataLoading;

@interface PHAWorker : NSObject

{
    PHAManager *_photoAnalysisManager;
    PFSerialQueue *_userInitiatedRequestQueue;
    _Bool _shutdownHasBeenCalled;
    _Bool _warmedUp;
    id <PHAAssetResourceDataLoading> _dataLoader;
    PHAServiceCancelableOperation *_currentOperation;
}

@property (nonatomic, getter=isWarmedUp) _Bool warmedUp;
@property (retain, nonatomic) id <PHAAssetResourceDataLoading> dataLoader;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) _Bool isEnabled;
@property (readonly, getter=isQuiescent) _Bool quiescent;
@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
+ (_Bool)persistsState;
+ (void)configureXPCConnection:(id)arg1;
+ (_Bool)runsExclusively;

- (id)init;
- (void)operationDidFinish:(id)arg1;
- (void)shutdown;
- (void)operationWillStart:(id)arg1;
- (void)startup;
- (void)cooldown;
- (void)handleOperation:(id)arg1;
- (id)statusAsDictionary;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (_Bool)canRunWhenGraphIsLoaded;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (void)dispatchSyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (void)assertUserInitiatedRequestQueue;
- (id)libraryScopedWorkerPreferences;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)libraryScopedWorkerPreferencesURL;
- (void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
