/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class SCNNode;

@interface AVTEyeSkinningDescriptor : NSObject

{
    SCNNode *_readMorpherNode;
    SCNNode *_leftEyeJoint;
    SCNNode *_rightEyeJoint;
    long long _leftEyeLookDownTargetIndex;
    long long _leftEyeLookInTargetIndex;
    long long _leftEyeLookOutTargetIndex;
    long long _leftEyeLookUpTargetIndex;
    long long _rightEyeLookDownTargetIndex;
    long long _rightEyeLookInTargetIndex;
    long long _rightEyeLookOutTargetIndex;
    long long _rightEyeLookUpTargetIndex;
}

@property (retain, nonatomic) SCNNode *readMorpherNode;
@property (retain, nonatomic) SCNNode *leftEyeJoint;
@property (retain, nonatomic) SCNNode *rightEyeJoint;
@property (nonatomic) long long leftEyeLookDownTargetIndex;
@property (nonatomic) long long leftEyeLookInTargetIndex;
@property (nonatomic) long long leftEyeLookOutTargetIndex;
@property (nonatomic) long long leftEyeLookUpTargetIndex;
@property (nonatomic) long long rightEyeLookDownTargetIndex;
@property (nonatomic) long long rightEyeLookInTargetIndex;
@property (nonatomic) long long rightEyeLookOutTargetIndex;
@property (nonatomic) long long rightEyeLookUpTargetIndex;

@end
