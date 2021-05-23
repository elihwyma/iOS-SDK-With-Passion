/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class SCNMaterial, SCNNode;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject

{
    SCNNode *_readMorpherNode;
    SCNMaterial *_leftEyeMaterial;
    SCNMaterial *_rightEyeMaterial;
    long long _leftEyeTargetIndex;
    long long _rightEyeTargetIndex;
}

@property (retain, nonatomic) SCNNode *readMorpherNode;
@property (retain, nonatomic) SCNMaterial *leftEyeMaterial;
@property (retain, nonatomic) SCNMaterial *rightEyeMaterial;
@property (nonatomic) long long leftEyeTargetIndex;
@property (nonatomic) long long rightEyeTargetIndex;

@end
