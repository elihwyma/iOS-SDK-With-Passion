/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (Core3DKitAdditions)

+ (id)valueWithSCNMatrix4:(struct SCNMatrix4)arg1;
+ (id)valueWithSCNVector3:(struct SCNVector3)arg1;
+ (id)valueWithSCNVector4:(struct SCNVector4)arg1;
+ (id)SCN_valueWithCGPoint:(struct CGPoint)arg1;
+ (id)SCN_valueWithSimdMatrix4:(CDStruct_14d5dc5e)arg1;

- (struct SCNVector3)SCNVector3Value;
- (struct SCNMatrix4)SCNMatrix4Value;
- (CDStruct_14d5dc5e)SCN_simdMatrix4Value;
- (struct SCNVector4)SCNVector4Value;
- (struct CGPoint)SCN_CGPointValue;

@end
