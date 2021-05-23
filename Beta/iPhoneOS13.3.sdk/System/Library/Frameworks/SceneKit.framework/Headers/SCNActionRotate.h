/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionRotate : SCNAction

{
    struct SCNCActionRotate *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (_Bool)isRelative;
- (id)reversedAction;

@end
