/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SADomainObject;

@interface SADomainObjectUpdate : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *addFields;
@property (retain, nonatomic) SADomainObject *identifier;
@property (retain, nonatomic) SADomainObject *removeFields;
@property (retain, nonatomic) SADomainObject *setFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)domainObjectUpdate;
+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
