/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, NTKFaceCollection, RERelevanceEngine;

@interface NTKRelevanceEngineCache : NSObject

{
    NSLock *_coordinatorLock;
    RERelevanceEngine *_coordinator;
    RERelevanceEngine *_staticCoordinator;
    NTKFaceCollection *_libraryCollection;
    _Bool _isEditing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCache;
+ (id)_modelFileLocation;
+ (id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg1;
+ (id)sampleConfiguration;
+ (id)_globallyCachedCanonicalRelevanceEngine;

- (id)init;
- (void)dealloc;
- (void)prewarm;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (_Bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (_Bool)_needsLiveElementCoordinator;
- (void)_loadCoordinatorIfNeeded;
- (void)_unloadCoordinatorIfNeeded;
- (void)_refreshLiveCoordinator;
- (_Bool)_faceCollectionNeedsLiveElementCoordinator:(id)arg1;
- (_Bool)_faceNeedsElementCoordinator:(id)arg1;
- (_Bool)_faceCollectionContainsSiriFace:(id)arg1;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidReorderFaces:(id)arg1;
- (void)faceCollectionDidReset:(id)arg1;
- (void)setLibraryCollection:(id)arg1;
- (id)sharedRelevanceEngine;
- (id)canonicalRelevanceEngine;
- (id)canonicalRelevanceEngineIgnoringAppInstallations;
- (void)_clockViewControllerDidBeginEditing;
- (void)_clockViewControllerDidEnterAddable;
- (void)_clockViewControllerDidEndEditing;
- (void)_beginLoadingDataForEngine:(id)arg1;

@end
