/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNDetectorManager : NSObject

{
    struct os_unfair_lock_s _activeDetectorsCacheLock;
    NSMutableDictionary *_activeDetectorsCache;
    struct os_unfair_lock_s _detectorTypeToSynchronizationQueueLookupLock;
    NSMutableDictionary *_detectorTypeToSynchronizationQueueLookup;
}

+ (id)manager;

- (id)init;
- (void)forcedCleanup;
- (void)forcedCleanupWithOptions:(id)arg1;
- (id)_cachedMetalDeviceWisdomParameters;
- (void)_flushMetalDeviceWisdomParametersCache;
- (Class)_detectorClassForDetectorType:(id)arg1 error:(id *)arg2;
- (id)_synchronizationQueueForDetectorType:(id)arg1;
- (_Bool)_specialCaseLookUpOfExistingDetector:(id *)arg1 forType:(id)arg2 configuredWithOptions:(id)arg3 error:(id *)arg4;
- (id)_detectorOfClass:(Class)arg1 type:(id)arg2 configuredWithOptions:(id)arg3 error:(id *)arg4;
- (Class)_detectorClassForDetectorType:(id)arg1 options:(id)arg2 detectorCreationOptions:(id *)arg3 error:(id *)arg4;
- (id)wisdomParametersForMetalDeviceWithName:(id)arg1;
- (id)detectorOfType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (Class)detectorClassForDetectorType:(id)arg1 options:(id)arg2;
- (void)_removeCachedDetectorClasses:(id)arg1;
- (void)_removeCachedDetectorTypes:(id)arg1;
- (void)_removeAllCachedDetectors;
- (id)loadedDetectors;
- (void)_forcedCleanupFacePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupScenePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupSmartCamPipelineWithLevel:(id)arg1;
- (void)_forcedCleanupJunkPipelineWithLevel:(id)arg1;
- (id)saliencyHeatmapBoundingBoxGeneratorForDetector:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;

@end
