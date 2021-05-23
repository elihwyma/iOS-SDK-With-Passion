/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@class AVAsset, NSArray, NSDictionary, NSObject, NSURL;

@protocol OS_dispatch_queue;

@interface NUVideoSourceNode : NUSourceNode

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loaded;
    NSURL *_URL;
    AVAsset *_asset;
    CDStruct_1b6d18a9 _duration;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _cleanAperture;
    long long _orientation;
    NSArray *_metadata;
    NSDictionary *_colorProperties;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

@property (readonly) CDStruct_996ac03c cleanAperture;
@property (readonly) CDStruct_1b6d18a9 duration;

- (id)initWithSettings:(id)arg1;
- (_Bool)load:(out id *)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;
- (long long)sourceOrientation;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)_load:(out id *)arg1;
- (id)asset:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(_Bool)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;

@end
