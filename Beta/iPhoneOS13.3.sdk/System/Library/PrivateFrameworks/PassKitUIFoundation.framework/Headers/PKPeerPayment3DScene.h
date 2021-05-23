/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <SceneKit/SCNScene.h>

@class MISSING_TYPE, SCNMaterial, SCNNode;

@interface PKPeerPayment3DScene : SCNScene

{
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    SCNNode *_textContainerNode;
    SCNMaterial *_textMaterial;
    MISSING_TYPE *_currentSkew;
    MISSING_TYPE *_currentRollPitch;
    CDStruct_14d5dc5e _currentRotationMatrix;
}

@property (retain, nonatomic) SCNNode *lightNode;
@property (retain, nonatomic) SCNNode *cameraNode;
@property (retain, nonatomic) SCNNode *textContainerNode;
@property (nonatomic) CDStruct_14d5dc5e currentRotationMatrix;
@property (nonatomic) MISSING_TYPE *currentSkew;
@property (nonatomic) MISSING_TYPE *currentRollPitch;
@property (retain, nonatomic) SCNMaterial *textMaterial;

+ (MISSING_TYPE *)staticRollPitch;
+ (CDStruct_14d5dc5e)rotationMatrixForRollPitch: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)skewForRollPitch: /* Error: Ran out of types for this method. */;

- (id)init;
- (void)resetScene;

@end
