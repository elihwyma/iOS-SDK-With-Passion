/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject

{
    struct __C3DScene *_scene;
    SCNSceneSource *_sceneSource;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNNode *_layerRootNode[4];
    SCNMaterialProperty *_background;
    SCNMaterialProperty *_environment;
    NSMutableDictionary *_userAttributes;
    double _fogStartDistance;
    double _fogEndDistance;
    double _fogDensityExponent;
    id _fogColor;
    _Bool _wantsScreenSpaceReflection;
    long long _screenSpaceReflectionSampleCount;
    double _screenSpaceReflectionMaxRayDistance;
    double _screenSpaceReflectionStride;
    _Bool _paused;
    NSURL *_sourceURL;
    _Bool _pausedForEditing;
    _Bool _allowsDefaultLightingEnvironmentFallback;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

@property (nonatomic, readonly) SCNNode *rootNode;
@property (nonatomic, readonly) SCNPhysicsWorld *physicsWorld;
@property (nonatomic, readonly) SCNMaterialProperty *background;
@property (nonatomic, readonly) SCNMaterialProperty *lightingEnvironment;
@property (nonatomic) double fogStartDistance;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogDensityExponent;
@property (retain, nonatomic) id fogColor;
@property (nonatomic) _Bool wantsScreenSpaceReflection;
@property (nonatomic) long long screenSpaceReflectionSampleCount;
@property (nonatomic) double screenSpaceReflectionMaximumDistance;
@property (nonatomic) double screenSpaceReflectionStride;
@property (nonatomic, getter=isPaused) _Bool paused;

+ (_Bool)supportsSecureCoding;
+ (id)scene;
+ (_Bool)canImportFileExtension:(id)arg1;
+ (id)sceneWithMDLAsset:(id)arg1 options:(id)arg2;
+ (id)sceneWithMDLAsset:(id)arg1;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (_Bool)canImportFileUTI:(id)arg1;
+ (id)supportedFileUTIsForImport;
+ (id)supportedFileUTIsForExport;
+ (id)_indexPathForNode:(id)arg1;
+ (SEL)jsConstructor;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)lock;
- (void)unlock;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)root;
- (id)debugQuickLookObject;
- (double)startTime;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (id)scene;
- (id)_scenes;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (float)playbackSpeed;
- (void)setPlaybackSpeed:(float)arg1;
- (void)_setRootNode:(id)arg1;
- (struct SCNVector3)upAxis;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)_resetSceneTimeRange;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (_Bool)isPausedOrPausedByInheritance;
- (id)particleSystems;
- (void)removeParticleSystem:(id)arg1;
- (id)_physicsWorldCreateIfNeeded:(_Bool)arg1;
- (void)_syncObjCModel;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)removeAllParticleSystems;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (_Bool)writeToURLWithUSDKit:(id)arg1;
- (_Bool)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (id)_nodeWithIndexPath:(id)arg1;
- (id)initForJavascript:(id)arg1;
- (void)set_allowsDefaultLightingEnvironmentFallback:(_Bool)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (void)_didEncodeSCNScene:(id)arg1;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)setRootNode:(id)arg1;
- (void)_didDecodeSCNScene:(id)arg1;
- (void)_clearSceneRef;
- (void)_setSourceURL:(id)arg1;
- (void)setSceneSource:(id)arg1;
- (id)sceneSource;
- (void)setRootNode:(id)arg1 forLayer:(int)arg2;
- (id)rootNodeForLayer:(int)arg1;
- (void)_scaleSceneBy:(double)arg1;
- (_Bool)_allowsDefaultLightingEnvironmentFallback;
- (double)screenSpaceReflectionDepthThreshold;
- (void)setScreenSpaceReflectionDepthThreshold:(double)arg1;
- (void)_dumpToDisk;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4)arg2;
- (void)setPausedForEditing:(_Bool)arg1;
- (_Bool)isPausedForEditing;
- (id)_subnodeFromIndexPath:(id)arg1;
- (void)_prettifyForPreview;
- (id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (_Bool)writeToURL:(id)arg1 options:(id)arg2;
- (id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (id)debugQuickLookObjectWithPointOfView:(id)arg1;

@end
