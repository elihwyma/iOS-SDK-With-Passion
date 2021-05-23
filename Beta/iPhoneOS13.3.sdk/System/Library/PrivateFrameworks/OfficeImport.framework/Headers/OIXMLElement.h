/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OIXMLNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLElement : OIXMLNode

{
    NSString *_name;
    id _attributes;
    id _children;
    _Bool _hasMultipleAttributes;
    _Bool _hasMultipleChildren;
    unsigned char _type;
}

+ (id)elementWithType:(unsigned char)arg1;
+ (id)elementWithType:(unsigned char)arg1 stringValue:(id)arg2;

- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addChild:(id)arg1;
- (id)stringValue;
- (id)initWithType:(unsigned char)arg1;
- (void)setStringValue:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)contentString;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithType:(unsigned char)arg1 stringValue:(id)arg2;
- (long long)attributeCount;
- (id)openingTagString;
- (id)closingTagString;
- (long long)childrenCount;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (_Bool)isEmptyHTMLElement;

@end
