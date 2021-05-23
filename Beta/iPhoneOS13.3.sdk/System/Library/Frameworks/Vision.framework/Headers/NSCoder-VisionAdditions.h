/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (VisionAdditions)

- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;
- (void)vn_encode3x3Matrix:(CDStruct_8e0628e6)arg1 forKey:(id)arg2;
- (CDStruct_8e0628e6)vn_decode3x3MatrixForKey:(id)arg1;
- (void)vn_encode4x4Matrix:(CDStruct_f1db2b5e)arg1 forKey:(id)arg2;
- (CDStruct_f1db2b5e)vn_decode4x4MatrixForKey:(id)arg1;

@end
