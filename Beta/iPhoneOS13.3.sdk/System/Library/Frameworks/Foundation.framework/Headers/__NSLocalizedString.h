/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableString.h>

#import <Foundation/Swift-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString <Swift>

{
    NSMutableString *original;
    NSDictionary *config;
}

+ (_Bool)supportsSecureCoding;

- (const char *)_fastCStringContents:(_Bool)arg1;
- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (id)substringWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)fastestEncoding;
- (Class)classForCoder;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendFormat:(id)arg1;
- (void)setString:(id)arg1;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)formatConfiguration;
- (id)substringFromIndex:(unsigned long long)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;
- (id)baseString;

@end
