/*
 Image: /System/Library/PrivateFrameworks/ARDisplayDevice.framework/ARDisplayDevice
 */

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (ARDisplayConfiguration)

- (MISSING_TYPE *)arddDecodeVectorFloat3ForKey:(id)arg1;
- (CDStruct_14d5dc5e)arddDecodeMatrixFloat4x4ForKey:(id)arg1;
- (void)arddEncodeMatrixFloat4x4:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;
- (void)arddEncodeVectorFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)arddEncodeMTLViewport:(CDStruct_8727d297)arg1 forKey:(id)arg2;
- (void)arddEncodeVectorUint2:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeVectorFloat2:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeVectorFloat4:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)encodeConfigView:(CDStruct_d2b197d1)arg1 forKey:(id)arg2;
- (struct CGRect)arddDecodeCGRectForKey:(id)arg1;
- (CDStruct_8727d297)arddDecodeMTLViewportForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorUint2ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorFloat2ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorFloat4ForKey:(id)arg1;
- (CDStruct_d2b197d1)decodeConfigViewForKey:(id)arg1;

@end
