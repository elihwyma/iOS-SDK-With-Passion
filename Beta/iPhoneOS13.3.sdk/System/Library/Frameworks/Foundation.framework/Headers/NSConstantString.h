/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString

- (const char *)_fastCStringContents:(_Bool)arg1;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2;
- (const char *)lossyCString;

@end
