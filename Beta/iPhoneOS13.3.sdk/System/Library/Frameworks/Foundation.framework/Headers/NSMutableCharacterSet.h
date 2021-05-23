/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCharacterSet.h>

#import <Foundation/Swift-Protocol.h>

@interface NSMutableCharacterSet : NSCharacterSet <Swift>

+ (_Bool)supportsSecureCoding;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)letterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)controlCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)illegalCharacterSet;
+ (id)symbolCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)invert;
- (id)initWithCoder:(id)arg1;
- (_Bool)isMutable;

@end
