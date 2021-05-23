/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@interface NSMutableString : NSString

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)stringWithCapacity:(unsigned long long)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (Class)classForCoder;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendFormat:(id)arg1;
- (void)setString:(id)arg1;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)_cfAppendCString:(const char *)arg1 length:(long long)arg2;
- (void)_cfPad:(struct __CFString *)arg1 length:(unsigned int)arg2 padIndex:(unsigned int)arg3;
- (void)_cfTrim:(struct __CFString *)arg1;
- (void)_cfTrimWS;
- (void)_cfLowercase:(const void *)arg1;
- (void)_cfUppercase:(const void *)arg1;
- (void)_cfCapitalize:(const void *)arg1;
- (void)_cfNormalize:(long long)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withCharacters:(const unsigned short *)arg2 length:(unsigned long long)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withCString:(const char *)arg2 length:(unsigned long long)arg3;
- (void)_trimWithCharacterSet:(id)arg1;
- (unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (_Bool)applyTransform:(id)arg1 reverse:(_Bool)arg2 range:(struct _NSRange)arg3 updatedRange:(struct _NSRange *)arg4;

@end
