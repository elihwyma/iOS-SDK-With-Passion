/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2StringAttribute.h>

@interface NEIKEv2SupportedAttribute : NEIKEv2StringAttribute

+ (id)copyTypeDescription;

- (unsigned long long)attributeType;
- (id)attributeName;

@end
