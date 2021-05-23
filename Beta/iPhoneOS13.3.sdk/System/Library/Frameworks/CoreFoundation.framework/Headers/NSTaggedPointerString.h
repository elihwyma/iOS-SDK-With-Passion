/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSTaggedPointerString : NSObject

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_setAsTaggedStringClass;

- (const char *)_fastCStringContents:(_Bool)arg1;
- (unsigned long long)retainCount;
- (_Bool)isNSString__;
- (unsigned long long)length;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)UTF8String;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (id)substringWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (_Bool)_isCString;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;

@end
