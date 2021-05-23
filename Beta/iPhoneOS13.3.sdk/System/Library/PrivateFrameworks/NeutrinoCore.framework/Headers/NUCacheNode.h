/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@class NSError, NSObject, NSString, NURenderContext, NUSourceNode;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface NUCacheNode : NURenderNode

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NURenderContext *_renderContext;
    NUSourceNode *_sourceNode;
    NSError *_sourceError;
    long long _subsampleFactor;
    NSString *_cachedCacheIdentifier;
}

@property (retain) NSString *cachedCacheIdentifier;
@property (nonatomic, readonly) NSString *cacheIdentifier;
@property (nonatomic, readonly) long long subsampleFactor;
@property (nonatomic, readonly) NURenderNode *inputNode;

+ (id)registry;
+ (id)cacheDirectoryURL;
+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
+ (void)_ensureCacheDirectoryURL:(id)arg1;
+ (void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2;
+ (long long)_maxCacheDirectorySize;
+ (void)clearCacheDirectory;

- (unsigned long long)_hash;
- (_Bool)isResolved;
- (id)persistentURL;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (void)nu_updateDigest:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (long long)sampleMode;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (_Bool)isEqualToRenderNode:(id)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)descriptionSubClassHook;
- (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (void)resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (void)_resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (id)resolvedSourceNode:(out id *)arg1;
- (id)persistentURLPrefix;
- (id)temporaryURLPrefix;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (_Bool)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id *)arg3;
- (void)resolveSourceWithResponse:(struct NUResponse *)arg1;

@end
