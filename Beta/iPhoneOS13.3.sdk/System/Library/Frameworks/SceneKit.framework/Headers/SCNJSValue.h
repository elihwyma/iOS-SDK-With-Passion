/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface SCNJSValue : NSValue

+ (id)SCNJSExportProtocol;
+ (id)valueWithVector3:(struct SCNVector3)arg1;
+ (id)valueWithVector4:(struct SCNVector4)arg1;
+ (id)valueWithMatrix4:(struct SCNMatrix4)arg1;

- (struct SCNVector3)vector3;
- (struct SCNVector4)vector4;
- (struct SCNMatrix4)matrix4;

@end
