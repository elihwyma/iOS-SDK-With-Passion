/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, SCNNode;

@interface AVTPhysicsRig : NSObject

{
    SCNNode *rig;
    SCNNode *chainRoot;
    double applyDownForce;
    MISSING_TYPE *restPosition;
    MISSING_TYPE *restDown;
}

@property (retain, nonatomic) SCNNode *rig;
@property (retain, nonatomic) SCNNode *chainRoot;
@property (nonatomic) MISSING_TYPE *restPosition;
@property (nonatomic) MISSING_TYPE *restDown;
@property (nonatomic) double applyDownForce;

@end
