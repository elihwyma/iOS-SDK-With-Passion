/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString

{
    union {
        unsigned short *fat;
        char *thin;
    } contents;
    struct {
        unsigned int isFat:1;
        unsigned int freeWhenDone:1;
        unsigned int refs:30;
    } flags;
    unsigned long long numCharacters;
    void *_reserved;
}

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)fastestEncoding;
- (const char *)lossyCString;
- (void)setContentsNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3 isUnicode:(_Bool)arg4;

@end
