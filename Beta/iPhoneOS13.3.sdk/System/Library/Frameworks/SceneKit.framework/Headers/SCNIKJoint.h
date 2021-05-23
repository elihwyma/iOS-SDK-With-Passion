/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode;

__attribute__((visibility("hidden")))
@interface SCNIKJoint : NSObject

{
    SCNNode *joint;
    double maxAllowedRotationAngle;
}

@property (nonatomic) SCNNode *joint;
@property (nonatomic) double maxAllowedRotationAngle;

@end
