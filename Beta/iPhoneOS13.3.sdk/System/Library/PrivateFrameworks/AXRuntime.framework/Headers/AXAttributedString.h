/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSMutableString.h>

#import <AXRuntime/Swift-Protocol.h>

@interface AXAttributedString : NSMutableString <Swift>

{
    struct __CFAttributedString *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)arg1;

- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)substringWithRange:(struct _NSRange)arg1;
- (void)appendString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1;
- (id)lowercaseString;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)uppercaseString;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)attributedString;
- (id)attributeValueForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (_Bool)hasAttributes;
- (_Bool)hasAttribute:(id)arg1;
- (_Bool)isAXAttributedString;
- (void)replaceString:(struct __CFString *)arg1;
- (id)coalescedAttributes;
- (void)enumerateAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAttributes:(id)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString *)arg1;
- (void)convertAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (const struct __CFAttributedString *)cfAttributedString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange)arg3;
- (id)initWithStringOrAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)appendAXAttributedString:(id)arg1;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)axStringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)appendStringOrAXAttributedString:(id)arg1;
- (id)coalescedFontAttributes;
- (id)axAttributedStringDescription;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)arg1;

@end
