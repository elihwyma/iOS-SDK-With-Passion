/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSAttributedString : NSObject <Swift>

@property (copy, readonly) NSString *string;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)_setAttributedDictionaryClass:(Class)arg1;

- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_createAttributedSubstringWithRange:(struct _NSRange)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1 replacingCharactersInRanges:(const struct _NSRange *)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;

@end
