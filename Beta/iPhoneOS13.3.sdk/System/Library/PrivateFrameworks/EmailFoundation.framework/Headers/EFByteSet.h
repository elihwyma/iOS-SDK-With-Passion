/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFByteSet : NSObject

{
    unsigned char _bitString[32];
}

+ (id)asciiWhitespaceSet;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCString:(const char *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (_Bool)byteIsMember:(unsigned char)arg1;

@end
