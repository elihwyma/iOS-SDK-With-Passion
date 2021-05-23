/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SCNExtensions)

- (unsigned long long)SCN_safeHash;
- (struct SCNVector3)SCNVector3Value;
- (struct SCNMatrix4)SCNMatrix4Value;
- (struct SCNVector4)SCNVector4Value;
- (id)SCNMutableDeepCopy;

@end
