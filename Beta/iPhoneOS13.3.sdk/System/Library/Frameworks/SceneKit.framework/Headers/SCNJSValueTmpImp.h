/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNJSValueTmpImp : NSObject

+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;

- (struct SCNVector4)toVector4;
- (struct SCNVector3)toVector3;
- (struct SCNMatrix4)toTransform3D;

@end
