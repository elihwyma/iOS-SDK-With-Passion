/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (id)initWithUTF8String:(const char *)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

@end
