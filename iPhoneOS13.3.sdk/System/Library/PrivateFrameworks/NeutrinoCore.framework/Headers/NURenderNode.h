//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, CIImage, NSDictionary, NSMutableDictionary, NSString, NUGeometrySpaceMap, NUImageGeometry;
@protocol NUImageProperties, NUVideoProperties;

@interface NURenderNode : NSObject
{
    BOOL _cached;
    long long _evaluatedForMode;
    NSUInteger _hashValue;
    BOOL _isGeometryNode;
    NSDictionary _inputs;
    NSDictionary *_settings;
    NSDictionary _xforms;
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

+ (id)nodeFromCache:(id)arg1 cache:(id)arg2;
+ (id)nodeFromCache:(id)arg1;
@property(readonly, nonatomic) NSString *spaceMapKey; // @synthesize spaceMapKey=_spaceMapKey;
@property(readonly, nonatomic) NSString *dominantInputKey; // @synthesize dominantInputKey=_dominantInputKey;
@property(retain) NUGeometrySpaceMap *cached_geometrySpaceMap; // @synthesize cached_geometrySpaceMap=_cached_geometrySpaceMap;
@property(retain) id <NUVideoProperties> cached_videoProperties; // @synthesize cached_videoProperties=_cached_videoProperties;
@property(retain) id <NUImageProperties> cached_imageProperties; // @synthesize cached_imageProperties=_cached_imageProperties;
@property(retain) NUImageGeometry *cached_outputImageGeometry; // @synthesize cached_outputImageGeometry=_cached_outputImageGeometry;
@property(retain) AVAudioMix *cached_outputAudioMix; // @synthesize cached_outputAudioMix=_cached_outputAudioMix;
@property(retain) AVVideoComposition *cached_outputVideoComposition; // @synthesize cached_outputVideoComposition=_cached_outputVideoComposition;
@property(retain) AVComposition *cached_outputVideo; // @synthesize cached_outputVideo=_cached_outputVideo;
@property(retain) NSMutableDictionary *cached_auxiliaryImages; // @synthesize cached_auxiliaryImages=_cached_auxiliaryImages;
@property(retain) CIImage *cached_outputImage; // @synthesize cached_outputImage=_cached_outputImage;
@property(readonly) BOOL isGeometryNode; // @synthesize isGeometryNode=_isGeometryNode;
@property(readonly) NSDictionary *xforms; // @synthesize xforms=_xforms;
@property(readonly) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly) NSDictionary *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) long long evaluatedForMode; // @synthesize evaluatedForMode=_evaluatedForMode;
@property(readonly, nonatomic) BOOL isCached; // @synthesize isCached=_cached;
// - (void).cxx_destruct;
- (void)nu_updateDigest:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)_hash;
- (NSUInteger)settingsAndInputsHash;
- (BOOL)isEqualToRenderNode:(id)arg1;
- (BOOL)isEqualToSettingsAndInputs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(BOOL)arg2;
- (void)_appendInputsWithOffset:(long long)arg1 to:(id)arg2;
- (id)_dictionaryToSingleLineString:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_evaluateVideoProperties:(out id )arg1;
- (id)videoProperties:(out id )arg1;
- (id)_evaluateImageProperties:(out id )arg1;
- (id)imageProperties:(out id )arg1;
- (id)_evaluateImageGeometry:(out id )arg1;
- (id)outputImageGeometry:(out id )arg1;
- (id)_evaluateGeometrySpaceMap:(out id )arg1;
- (id)geometryNode;
- (id)uniqueInputNode;
- (id)outputGeometrySpaceMap:(out id )arg1;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id )arg2;
- (id)originalAuxiliaryImageForType:(long long)arg1 error:(out id )arg2;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (id)_evaluateImage:(out id )arg1;
- (id)debugQuickLookObject;
- (id)outputImage:(out id )arg1;
- (id)_evaluateAudioMix:(out id )arg1;
- (id)outputAudioMix:(out id )arg1;
- (BOOL)requiresAudioMix;
- (id)_evaluateVideoComposition:(out id )arg1;
- (id)outputVideoComposition:(out id )arg1;
- (BOOL)requiresVideoComposition;
- (id)_evaluateVideo:(out id )arg1;
- (id)outputVideo:(out id )arg1;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id )arg2;
- (id)resolvedNodeWithCachedInputs:(NSDictionary )arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id )arg4;
- (id)placeholderNodeWithCachedInputs:(NSDictionary )arg1;
- (id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;
- (id)nodeByReplayingAgainstCache:(id)arg1 error:(out id )arg2;
- (void)resetInput:(id)arg1 forKey:(id)arg2;
- (BOOL)hasCyclicalDependencyForInput:(id)arg1;
- (id)inputForKey:(id)arg1;
- (id)_generateSpaceMapKey;
@property(readonly) BOOL isPlaceholderNode;
- (id)initWithSettings:(id)arg1 inputs:(NSDictionary )arg2;
- (id)init;

@end

