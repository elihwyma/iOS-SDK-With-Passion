/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SADomainObject;

@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *domainItem;

+ (id)domainObjectPunchOut;
+ (id)domainObjectPunchOutWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
