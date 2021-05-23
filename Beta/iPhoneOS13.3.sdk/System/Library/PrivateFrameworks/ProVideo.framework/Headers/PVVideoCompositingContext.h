/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVColorSpace;

@interface PVVideoCompositingContext : NSObject

{
    _Bool concatenationFlag;
    _Bool renderStatsFlag;
    _Bool textureBorder;
    _Bool dynamicPlayback;
    _Bool powerFriendlyExport;
    int renderDevice;
    int gpuRenderAPI;
    int numCPUThreads;
    int bufferFormat;
    int filterMode;
    int renderGraphDumpLevel;
    int renderStatsWarmUp;
    int renderStatsMaxVals;
    int dotGraphLevel;
    int tileSize;
    int shaderFormat;
    int traceGLLevel;
    int traceMetalLevel;
    int signPostLevel;
    int pageSize;
    int instructionGraphDumpLevel;
    int instructionGraphDotTreeLevel;
    int perfStatsLogLevel;
    int pmrLevel;
    int workingColorSpaceConformIntent;
    int conformColorSpacesToDestinationBufferSpace;
    PVColorSpace *outputColorSpace;
    PVColorSpace *_workingColorSpace;
}

@property int gpuRenderAPI;
@property int numCPUThreads;
@property int bufferFormat;
@property int shaderFormat;
@property int filterMode;
@property _Bool concatenationFlag;
@property int tileSize;
@property int pageSize;
@property _Bool textureBorder;
@property _Bool dynamicPlayback;
@property int renderGraphDumpLevel;
@property _Bool renderStatsFlag;
@property int renderStatsWarmUp;
@property int renderStatsMaxVals;
@property int dotGraphLevel;
@property int traceGLLevel;
@property (nonatomic) int traceMetalLevel;
@property (nonatomic) int signPostLevel;
@property (nonatomic) int instructionGraphDumpLevel;
@property (nonatomic) int instructionGraphDotTreeLevel;
@property (nonatomic) int pmrLevel;
@property (nonatomic) int perfStatsLogLevel;
@property (nonatomic) int renderDevice;
@property (nonatomic) _Bool powerFriendlyExport;
@property (nonatomic) int conformColorSpacesToDestinationBufferSpace;
@property (nonatomic) int workingColorSpaceConformIntent;
@property (retain, nonatomic) PVColorSpace *workingColorSpace;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;

+ (_Bool)supportsSecureCoding;
+ (void)setColorSpaceDefaultsForDeviceClass;
+ (id)createContextForGPU;
+ (void)setWorkingColorSpace:(id)arg1 outputColorSpace:(id)arg2 workingSpaceConformIntent:(int)arg3;
+ (id)dotGraphLoggingDirectory;
+ (id)createContextForCPU;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContext:(id)arg1;
- (id)initWithDevice:(int)arg1;
- (void)setIntermediateBufferFormatForWorkingColorSpace;
- (void)dumpContext;

@end
