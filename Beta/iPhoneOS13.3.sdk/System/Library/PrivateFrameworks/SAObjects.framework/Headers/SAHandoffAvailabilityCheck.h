/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand

+ (id)handoffAvailabilityCheck;
+ (id)handoffAvailabilityCheckWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
