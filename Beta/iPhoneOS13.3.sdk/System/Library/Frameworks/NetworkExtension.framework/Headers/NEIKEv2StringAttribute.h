/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute

{
    NSString *_stringValue;
    unsigned long long _customType;
}

@property (nonatomic) unsigned long long customType;
@property (retain) NSString *stringValue;

+ (id)copyTypeDescription;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)valueType;
- (unsigned long long)attributeType;
- (id)initWithStringValue:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 stringValue:(id)arg3;

@end
