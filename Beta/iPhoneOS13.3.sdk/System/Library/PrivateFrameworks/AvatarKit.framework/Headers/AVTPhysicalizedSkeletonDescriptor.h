/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject

{
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    MISSING_TYPE *_upDownRotation;
    MISSING_TYPE *_leftRightRotation;
    MISSING_TYPE *_forwardBackRotation;
}

@property (nonatomic) float simulationFactor;
@property (retain, nonatomic) SCNNode *referenceNode;
@property (retain, nonatomic) SCNNode *drivingNode;
@property (retain, nonatomic) SCNNode *rootJoint;
@property (nonatomic) MISSING_TYPE *upDownRotation;
@property (nonatomic) MISSING_TYPE *leftRightRotation;
@property (nonatomic) MISSING_TYPE *forwardBackRotation;

@end
