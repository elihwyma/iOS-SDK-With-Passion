/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAPropertyOverride : SADomainObject

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSString *value;

+ (id)propertyOverride;
+ (id)propertyOverrideWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
