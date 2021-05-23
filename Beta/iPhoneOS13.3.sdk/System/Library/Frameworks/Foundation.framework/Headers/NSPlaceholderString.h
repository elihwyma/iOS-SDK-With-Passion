/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithCString:(const char *)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id *)arg5;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;

@end
