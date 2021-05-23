/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, SCNGeometry, SCNManipulator, SCNNode, SCNRenderer, UIColor;

@interface SCNAuthoringEnvironment2 : NSObject

{
    NSMutableSet *_selection;
    struct __C3DScene *_scene;
    SCNNode *_layerRoot;
    SCNNode *_overlayLayerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_physicsFieldsRoot;
    SCNNode *_cameraTarget;
    SCNNode *_pointsOfViewRoot;
    struct __CFDictionary *_lightsDictionary;
    struct __CFDictionary *_camerasDictionary;
    struct __CFDictionary *_particlesDictionary;
    struct __CFDictionary *_physicsFieldsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraOrthographicFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_fieldGeometry;
    long long _displayMask;
    UIColor *_paleGreen;
    UIColor *_paleBlue;
    UIColor *_red;
    UIColor *_green;
    UIColor *_blue;
    UIColor *_cyan;
    UIColor *_yellow;
    UIColor *_orange;
    UIColor *_pink;
    UIColor *_grayLight;
    UIColor *_grayMedium;
    UIColor *_grayDark;
    UIColor *_white;
    SCNManipulator *_manipulator;
}

@property (nonatomic, readonly) SCNNode *authoringLayer;
@property (nonatomic, readonly) SCNNode *authoringOverlayLayer;
@property (nonatomic, readonly) SCNManipulator *manipulator;
@property long long displayMask;

+ (id)authoringEnvironmentForScene:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)authoringEnvironmentForScene:(id)arg1;

- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)cancelSelection;
- (void)prepareScene:(id)arg1;
- (void)addedNode:(id)arg1;
- (id)geometryForLightType:(id)arg1;
- (id)particlesGeometry;
- (id)cameraGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraNearPlaneGeometry;
- (id)fieldGeometry;
- (void)addLightNode:(id)arg1;
- (void)addParticlesNode:(id)arg1;
- (void)addCameraNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(id)arg2 light:(id)arg3;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 screenspaceScalingFactor:(float)arg4;
- (void)setupParticleMeshEmitter:(id)arg1 authoringNode:(id)arg2;
- (void)_updateRootsVisibility;
- (id)authoringCameraNodes;
- (void)removedNode:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)selectNodes:(id)arg1;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateWithRenderer:(id)arg1;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (id)authoringCamera:(long long)arg1;

@end
