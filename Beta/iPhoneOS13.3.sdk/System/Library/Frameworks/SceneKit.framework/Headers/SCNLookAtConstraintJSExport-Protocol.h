/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNNode;

@protocol SCNLookAtConstraintJSExport <Swift>

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) struct SCNVector3 targetOffset;
@property (nonatomic) struct SCNVector3 localFront;
@property (nonatomic) struct SCNVector3 upVector;
@property (nonatomic) _Bool gimbalLockEnabled;

+ (unsigned short)lookAtConstraintWithTarget: /* Error: Ran out of types for this method. */;

@end
