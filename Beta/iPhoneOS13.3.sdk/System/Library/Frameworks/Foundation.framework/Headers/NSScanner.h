/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSCharacterSet, NSString;

@interface NSScanner : NSObject <Swift>

@property (copy, readonly) NSString *string;
@property unsigned long long scanLocation;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property _Bool caseSensitive;
@property (retain) id locale;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)localizedScannerWithString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isAtEnd;
- (id)_remainingString;
- (_Bool)_scanDecimal:(unsigned long long)arg1 into:(long long *)arg2;
- (_Bool)scanCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanString:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanInt:(int *)arg1;
- (_Bool)scanLongLong:(long long *)arg1;
- (_Bool)scanUnsignedLongLong:(unsigned long long *)arg1;
- (_Bool)scanHexLongLong:(unsigned long long *)arg1;
- (id)_invertedSkipSet;
- (_Bool)scanDouble:(double *)arg1;
- (_Bool)scanFloat:(float *)arg1;
- (_Bool)scanHexDouble:(double *)arg1;
- (_Bool)scanHexFloat:(float *)arg1;
- (_Bool)scanInteger:(long long *)arg1;
- (_Bool)scanUnsignedInteger:(unsigned long long *)arg1;
- (_Bool)scanHexInt:(unsigned int *)arg1;
- (_Bool)scanUpToString:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanDecimal:(CDStruct_5fe7aead *)arg1;

@end
