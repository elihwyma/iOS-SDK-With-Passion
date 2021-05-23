/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@class NSDictionary, NSObject, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface NUCGImageSourceNode : NUSourceNode

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loaded;
    NSURL *_URL;
    NSString *_UTI;
    struct CGImageSource *_cgImageSource;
    NSDictionary *_cgImageProperties;
    long long _orientation;
    struct CGColorSpace *_colorSpace;
    long long _alphaInfo;
    long long _componentInfo;
    NSDictionary *_auxiliaryImagesProperties;
    CDStruct_d58201db _size;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *UTI;
@property _Bool loaded;
@property (retain, nonatomic) struct CGImageSource *cgImageSource;
@property (retain, nonatomic) NSDictionary *cgImageProperties;
@property CDStruct_912cb5d2 size;
@property long long orientation;
@property (retain, nonatomic) struct CGColorSpace *colorSpace;
@property long long alphaInfo;
@property long long componentInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;

+ (_Bool)isFusedOvercaptureFromCGImageProperties:(id)arg1;

- (void)dealloc;
- (void)_init;
- (id)initWithSettings:(id)arg1;
- (id)debugQuickLookObject;
- (_Bool)load:(out id *)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1 identifier:(id)arg2;
- (id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3;
- (id)initWithURL:(id)arg1 UTI:(id)arg2 settings:(id)arg3;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (long long)sourceOrientation;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)_load:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (long long)normalizeSubsampleFactor:(long long)arg1;
- (id)auxiliaryImagePropertiesForAuxImageType:(long long)arg1;
- (id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (_Bool)_setGeometryFromProperties:(id)arg1 error:(out id *)arg2;
- (_Bool)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg1 error:(out id *)arg2;
- (id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;

@end
