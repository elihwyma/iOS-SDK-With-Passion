/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OIXMLNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLTextNode : OIXMLNode

{
    NSString *_value;
}

+ (id)textNodeWithStringValue:(id)arg1;

- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;

@end
