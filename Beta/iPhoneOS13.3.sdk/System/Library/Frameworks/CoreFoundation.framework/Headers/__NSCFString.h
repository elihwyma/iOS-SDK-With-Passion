/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFString : __NSCFType

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (const char *)_fastCStringContents:(_Bool)arg1;
- (unsigned long long)retainCount;
- (_Bool)isNSString__;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (const char *)cString;
- (const char *)UTF8String;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (id)substringWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (_Bool)hasSuffix:(id)arg1;
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (Class)classForCoder;
- (_Bool)_isCString;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendFormat:(id)arg1;
- (void)setString:(id)arg1;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

@end
