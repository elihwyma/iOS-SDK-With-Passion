/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _NSClStr : NSString

{
    unsigned long long length;
    unsigned short *characters;
}

- (void)dealloc;
- (unsigned long long)length;
- (id)initWithUTF8String:(const char *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

@end
