/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (OCMutableDataAdditions)

- (void)appendLELong:(int)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withLELong:(int)arg2;
- (void)appendLEShort:(short)arg1;
- (void)appendString:(id)arg1 encoding:(unsigned long long)arg2;

@end
