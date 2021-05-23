/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OIXMLNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLAttribute : OIXMLNode

{
    NSString *_name;
    NSString *_value;
}

+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;

- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;

@end
