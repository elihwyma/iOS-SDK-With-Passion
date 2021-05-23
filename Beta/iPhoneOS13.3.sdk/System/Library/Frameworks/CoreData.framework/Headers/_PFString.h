/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFString : NSString

{
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (const char *)_fastCStringContents:(_Bool)arg1;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (const char *)cString;
- (const char *)UTF8String;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (Class)classForCoder;
- (_Bool)_isCString;
- (Class)classForArchiver;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCString:(char *)arg1;

@end
