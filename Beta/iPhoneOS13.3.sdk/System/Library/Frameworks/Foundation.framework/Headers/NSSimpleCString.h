/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString

{
    char *bytes;
    int numBytes;
    int _unused;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (const char *)_fastCStringContents:(_Bool)arg1;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (_Bool)hasSuffix:(id)arg1;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (id)stringByAppendingString:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2;

@end
