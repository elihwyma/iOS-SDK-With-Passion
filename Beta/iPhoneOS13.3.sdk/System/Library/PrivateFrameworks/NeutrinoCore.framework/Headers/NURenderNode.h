/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, CIImage, NSDictionary, NSMutableDictionary, NSString, NUGeometrySpaceMap, NUImageGeometry;

@protocol NUImageProperties, NUVideoProperties;

@interface NURenderNode : NSObject

{
    _Bool _cached;
    long long _evaluatedForMode;
    unsigned long long _hashValue;
    _Bool _isGeometryNode;
    struct NSDictionary *_inputs;
    NSDictionary *_settings;
    struct NSDictionary *_xforms;
    CIImage *_cached_outputImage;
    NSMutableDictionary *_cached_auxiliaryImages;
    AVComposition *_cached_outputVideo;
    AVVideoComposition *_cached_outputVideoComposition;
    AVAudioMix *_cached_outputAudioMix;
    NUImageGeometry *_cached_outputImageGeometry;
    id <NUImageProperties> _cached_imageProperties;
    id <NUVideoProperties> _cached_videoProperties;
    NUGeometrySpaceMap *_cached_geometrySpaceMap;
    NSString *_dominantInputKey;
    NSString *_spaceMapKey;
}

@property (retain) CIImage *cached_outputImage;
@property (retain) NSMutableDictionary *cached_auxiliaryImages;
@property (retain) AVComposition *cached_outputVideo;
@property (retain) AVVideoComposition *cached_outputVideoComposition;
@property (retain) AVAudioMix *cached_outputAudioMix;
@property (retain) NUImageGeometry *cached_outputImageGeometry;
@property (retain) id <NUImageProperties> cached_imageProperties;
@property (retain) id <NUVideoProperties> cached_videoProperties;
@property (retain) NUGeometrySpaceMap *cached_geometrySpaceMap;
@property (nonatomic, readonly) _Bool isCached;
@property (nonatomic) long long evaluatedForMode;
@property (nonatomic, readonly) NSString *dominantInputKey;
@property (nonatomic, readonly) NSString *spaceMapKey;
@property (readonly) NSDictionary *inputs;
@property (readonly) NSDictionary *settings;
@property (readonly) NSDictionary *xforms;
@property (readonly) _Bool isGeometryNode;
@property (readonly) _Bool isPlaceholderNode;

+ (id)nodeFromCache:(id)arg1 cache:(id)arg2;
+ (id)nodeFromCache:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (unsigned long long)_hash;
- (id)debugQuickLookObject;
- (id)outputImage:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (void)nu_updateDigest:(id)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateAudioMix:(out id *)arg1;
- (_Bool)isEqualToRenderNode:(id)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id *)arg2;
- (_Bool)canPropagateOriginalAuxiliaryData;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (id)_generateSpaceMapKey;
- (id)inputForKey:(id)arg1;
- (_Bool)hasCyclicalDependencyForInput:(id)arg1;
- (void)resetInput:(id)arg1 forKey:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 error:(out id *)arg2;
- (id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)placeholderNodeWithCachedInputs:(struct NSDictionary *)arg1;
- (id)outputVideo:(out id *)arg1;
- (id)outputVideoComposition:(out id *)arg1;
- (id)outputAudioMix:(out id *)arg1;
- (id)originalAuxiliaryImageForType:(long long)arg1 error:(out id *)arg2;
- (id)outputGeometrySpaceMap:(out id *)arg1;
- (id)uniqueInputNode;
- (id)geometryNode;
- (id)outputImageGeometry:(out id *)arg1;
- (id)imageProperties:(out id *)arg1;
- (id)videoProperties:(out id *)arg1;
- (id)_dictionaryToSingleLineString:(id)arg1;
- (void)_appendInputsWithOffset:(long long)arg1 to:(id)arg2;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(_Bool)arg2;
- (_Bool)isEqualToSettingsAndInputs:(id)arg1;
- (unsigned long long)settingsAndInputsHash;

@end
