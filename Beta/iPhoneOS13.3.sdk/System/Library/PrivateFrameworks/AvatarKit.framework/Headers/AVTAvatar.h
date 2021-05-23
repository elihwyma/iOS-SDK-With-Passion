/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTEyeSkinningDescriptor, AVTPhysicsController, AVTPupilReflectionCorrectionDescriptor, CAAnimation, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSString, SCNAnimationPlayer, SCNNode, SCNPhysicsWorld;

@interface AVTAvatar : NSObject

{
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    CDStruct_b01a1f36 *_morphInfoFromARKitBlendShapeIndex;
    CDStruct_b01a1f36 *_friendlyPoseMorphInfos;
    unsigned long long _friendlyPoseMorphInfoCount;
    int _transitionCount;
    _Bool _arMode;
    _Bool _optimizedForSnapshot;
    SCNPhysicsWorld *_physicsWorld;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    struct SCNVector3 _lookAt;
    NSMutableArray *_correctiveMorpherDescriptors;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_physicalizedSkeletonDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    NSMutableDictionary *_morpherWeightRemappingDescriptors;
    NSMutableDictionary *_morpherWeightThresholdDescriptors;
    NSMutableDictionary *_morpherWeightThresholdStates;
    MISSING_TYPE *_arOffset;
    float _arScale;
    double _physicsScaleFactor;
    double _lastRenderTime;
    CAAnimation *_bakedAnimation;
    SCNAnimationPlayer *_bakedAnimationPlayer_lazy;
}

@property (readonly) SCNNode *avatarNode;
@property (readonly) SCNNode *headNode;
@property (readonly) SCNNode *neckNode;
@property (nonatomic) _Bool arMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned char)classIdentifier;
+ (id)avatarWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (void)preloadAvatar:(id)arg1;
+ (_Bool)canLoadDataRepresentation:(id)arg1;
+ (struct SCNVector4)applyGazeCorrectionWithInputAngle:translation: /* Error: Ran out of types for this method. */;
+ (_Bool)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataRepresentation;
- (id)pose;
- (void)update;
- (_Bool)isTransitioning;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setPose:(id)arg1;
- (void)stopTransitionAnimation;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)setPhysicsScaleFactor:(double)arg1;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (id)physicsWorldForPhysicsController:(id)arg1;
- (id)avatarNodeForPhysicsController:(id)arg1;
- (double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2;
- (void)setupPhysicsIfNeeded;
- (id)physicsState;
- (void)resetToPhysicsState:(id)arg1;
- (void)willRemoveFromScene:(id)arg1;
- (void)setOptimizeForSnapshot:(_Bool)arg1;
- (void)pauseBakedAnimation;
- (void)didAddToScene:(id)arg1;
- (void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2;
- (void)_encode:(id)arg1;
- (long long)blendShapeIndexForBlendShapeName:(id)arg1;
- (CDStruct_b01a1f36)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1;
- (id)stickerPhysicsStateIdentifier;
- (void)setAvatarNode:(id)arg1;
- (void)updateBindings;
- (void)resetCustomBehaviours;
- (id)arTechniqueName;
- (id)lightingNode;
- (id)cameraNode;
- (_Bool)_decode:(id)arg1 error:(id *)arg2;
- (_Bool)hasCustomARTechnique;
- (void)avatarCommonInit;
- (void)setHeadNode:(id)arg1;
- (float)arScale;
- (MISSING_TYPE *)arOffset;
- (void)setupFaceTracking;
- (void)setupMorphInfo;
- (void)setupEyeOrientationAndReflections;
- (void)resetARModeBehaviours;
- (void)_updateShaderModifier:(id)arg1 forARMode:(_Bool)arg2 withOnTopMask:(_Bool)arg3;
- (void)lookAt:(struct SCNVector3)arg1 withDuration:(double)arg2;
- (void)updateBindingsOfNode:(id)arg1;
- (id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2;
- (void)resetMorphingSkinningControllers;
- (void)setupMorphInfoForChangeInSubHierarchy;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)resetPhysicalizedDescriptors;
- (void)resetCorrectiveDescriptors;
- (void)resetMorpherDrivenMaterials;
- (void)resetMorpherWeightRemappings;
- (void)resetMorpherWeightThresholdings;
- (void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(_Bool)arg2;
- (void)addCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorpherWeightRemappings;
- (void)addMorpherWeightThresholdings;
- (void)removePhysicalizedDescriptorsInHierarchy:(id)arg1;
- (void)removeCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (_Bool)optimizeForSnapshot;
- (id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (_Bool)usesSkinningForEyeOrientation;
- (void)evaluatePhysicalizedDescriptors;
- (void)applyCorrectiveDescriptors;
- (void)updateEyeOrientationAndReflections;
- (void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1;
- (float)applyWeightRemapForLocation:(id)arg1 weight:(float)arg2;
- (void)applyWeightWithThresholdingForLocation:(id)arg1 weight:(float)arg2 morphInfo:(CDStruct_b01a1f36)arg3;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2 pointOfView:(id)arg3;
- (id)blendShapeNameForBlendShapeIndex:(unsigned long long)arg1;
- (id)bakedAnimationPlayer;
- (double)physicsDownforceForNodeNamed:(id)arg1;
- (void)physicsSpecializationSettingsDidChange;
- (void)setBakedAnimationReferenceTime:(double)arg1;
- (void)resumeBakedAnimation;
- (id)bakedAnimationCopy;
- (void)rotateHead:(double)arg1;
- (struct SCNVector3)currentLookAt;
- (void)addCustomBehavioursInHierarchy:(id)arg1;
- (void)removeCustomBehavioursInHierarchy:(id)arg1;
- (void)resetThresholdingStates;
- (float)thresholdedWeightAtLocation:(id)arg1 sourceWeight:(float)arg2 time:(double)arg3;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2;
- (void)_resetFaceToRandomPosition;
- (id)debugPoseJSONRepresentation;

@end
