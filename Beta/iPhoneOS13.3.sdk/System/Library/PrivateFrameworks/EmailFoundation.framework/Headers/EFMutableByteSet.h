/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFByteSet.h>

@interface EFMutableByteSet : EFByteSet

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invert;
- (void)addBytesInRange:(struct _NSRange)arg1;
- (void)removeBytesInRange:(struct _NSRange)arg1;

@end
