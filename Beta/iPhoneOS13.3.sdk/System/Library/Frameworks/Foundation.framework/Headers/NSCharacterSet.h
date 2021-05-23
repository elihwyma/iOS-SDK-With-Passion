/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData;

@interface NSCharacterSet : NSObject <Swift>

@property (copy, readonly) NSData *bitmapRepresentation;
@property (copy, readonly) NSCharacterSet *invertedSet;

+ (void)initialize;
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
+ (id)URLUserAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLFragmentAllowedCharacterSet;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (_Bool)longCharacterIsMember:(unsigned int)arg1;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (id)_retainedBitmapRepresentation;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (_Bool)isMutable;
- (void)makeImmutable;

@end
