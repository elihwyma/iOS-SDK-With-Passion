/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (ARKit)

- (CDStruct_14d5dc5e)decodeMatrix4x4ForKey:(id)arg1;
- (MISSING_TYPE *)decodeVector3ForKey:(id)arg1;
- (void)encodeMatrix4x4:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;
- (void)encodeVector3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (CDStruct_8e0628e6)decodeMatrix3x3ForKey:(id)arg1;
- (void)encodeMatrix3x3:(CDStruct_8e0628e6)arg1 forKey:(id)arg2;
- (void)encodeCMRotationMatrix:(CDStruct_2d7b3170)arg1 forKey:(id)arg2;
- (CDStruct_2d7b3170)decodeCMRotationMatrixForKey:(id)arg1;
- (void)encodeVector2:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)decodeVector2ForKey:(id)arg1;
- (void)encodeMatrix4x3:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;
- (CDStruct_14d5dc5e)decodeMatrix4x3ForKey:(id)arg1;

@end
