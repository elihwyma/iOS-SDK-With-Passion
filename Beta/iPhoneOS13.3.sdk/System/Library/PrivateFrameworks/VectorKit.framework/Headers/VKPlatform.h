/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKPlatform : NSObject

{
    unsigned long long _memSize;
    int _numCPUs;
    _Bool _isMac;
    _Bool _proceduralRoadAlpha;
    _Bool _useCheapTrafficShader;
    _Bool _supportsBuildingStrokes;
    _Bool _supports3DBuildingStrokes;
    _Bool _lowPerformanceDevice;
    _Bool _supportsCoastlineGlows;
    _Bool _supportsPerFragmentLighting;
    _Bool _supportsARMode;
}

@property (nonatomic, readonly) _Bool roadsWithSimpleLineMeshesAvailable;
@property (nonatomic, readonly) unsigned int tilePrefetchNumberOfScreens;
@property (nonatomic, readonly) _Bool supportsHiResRTT;
@property (nonatomic, readonly) _Bool isPad;
@property (nonatomic, readonly) _Bool shouldDrawWhenReady;
@property (nonatomic, readonly) _Bool shouldStyleLabelsInParallel;
@property (nonatomic, readonly) _Bool canMakeSharingThumbnails;
@property (nonatomic, readonly) _Bool supportsBuildingShadows;
@property (nonatomic, readonly) _Bool supportsBuildingStrokes;
@property (nonatomic, readonly) _Bool supports3DBuildingStrokes;
@property (nonatomic, readonly) _Bool supportsHiResBuildings;
@property (nonatomic, readonly) _Bool supports3DBuildings;
@property (nonatomic, readonly) _Bool supportsPerFragmentLighting;
@property (nonatomic, readonly) _Bool supportsCoastlineGlows;
@property (nonatomic, readonly) _Bool proceduralRoadAlpha;
@property (nonatomic, readonly) _Bool useCheapTrafficShader;
@property (nonatomic, readonly) unsigned long long memorySize;
@property (nonatomic, readonly) unsigned char tileDecodeQueueWidth;
@property (nonatomic, readonly) unsigned char processingQueueWidth;
@property (nonatomic, readonly) _Bool lowPerformanceDevice;
@property (nonatomic, readonly) double routeLineSimplificationEpsilon;
@property (nonatomic, readonly) _Bool supportsARMode;

+ (id)sharedPlatform;

- (id)init;
- (void)dealloc;
- (void)_determineHardware;
- (unsigned long long)_calculateMemSize;
- (unsigned long long)tileMaximumLimit:(unsigned long long)arg1;

@end
