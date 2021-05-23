/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NUBufferRenderClient, NUComposition, NUPriority, NURenderContext, PICompositionController, PLEditSource;

@interface PLPhotoEditRenderer : NSObject

{
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    PICompositionController *_compositionController;
    NUPriority *_priority;
    NUBufferRenderClient *_renderClient;
    NURenderContext *_videoRenderContext;
    NURenderContext *_geometryContext;
    NURenderContext *_smartToneAutoCalculatorContext;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    long long _smartFiltersCubeSize;
}

@property (retain, nonatomic, readonly) NUComposition *composition;
@property (retain, nonatomic, readonly) PLEditSource *editSource;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) long long smartFiltersCubeSize;
@property (nonatomic, readonly) double smartToneBaseBrightness;
@property (nonatomic, readonly) double smartToneBaseContrast;
@property (nonatomic, readonly) double smartToneBaseExposure;
@property (nonatomic, readonly) double smartToneBaseHighlights;
@property (nonatomic, readonly) double smartToneBaseShadows;
@property (nonatomic, readonly) double smartToneBaseBlackPoint;
@property (nonatomic, readonly) double smartToneBaseLocalLight;
@property (nonatomic, readonly) double smartColorBaseContrast;
@property (nonatomic, readonly) double smartColorBaseSaturation;
@property (nonatomic, readonly) double smartColorBaseCast;
@property (nonatomic, readonly) double smartBWBaseStrength;
@property (nonatomic, readonly) double smartBWBaseNeutralGamma;
@property (nonatomic, readonly) double smartBWBaseTone;
@property (nonatomic, readonly) double smartBWBaseHue;
@property (nonatomic, readonly) double smartBWBaseGrain;

+ (id)compositionWithController:(id)arg1 source:(id)arg2;
+ (id)compositionWithController:(id)arg1 source:(id)arg2 overcaptureSource:(id)arg3;
+ (void)configureNeutrinoCacheDirectoryIfNeeded;
+ (id)newImageDataFromCGImage:(struct CGImage *)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(_Bool)arg4;
+ (_Bool)currentDeviceShouldAllowLocalLight;
+ (void)updateComposition:(id)arg1 fromPortraitMetadata:(id)arg2;
+ (void)updateCompositionController:(id)arg1 fromPortraitMetadata:(id)arg2;

- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2;
- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 renderPriority:(long long)arg3;
- (id)newExporter;
- (id)newImageExporterOptions;
- (id)newVideoExporterOptions;
- (id)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 renderTime:(CDStruct_198678f7)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderVideoWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)_smartToneLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
- (double)_smartColorLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
- (double)_smartBWLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
- (id)_smartToneAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartBWAdjustments;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getGeometryForComposition:(id)arg1;
- (void)applySourceChangesToCompositionController:(id)arg1 source:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
