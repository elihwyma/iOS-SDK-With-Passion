/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *object;

+ (id)acknowledgeAlert;
+ (id)acknowledgeAlertWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
