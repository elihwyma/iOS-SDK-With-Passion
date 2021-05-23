/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSString.h>

@interface __NSATSStringSegment : NSString

{
    struct __CFString *_originalString;
    long long _originalStringLength;
    CDStruct_627e0f85 _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)dealloc;
- (unsigned long long)length;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange)arg2;

@end
