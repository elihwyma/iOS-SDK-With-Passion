/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SADeviceCarDNDHintContext : SADomainObject

@property (copy, nonatomic) NSString *utteranceDomainIdentifier;

+ (id)carDNDHintContext;
+ (id)carDNDHintContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
