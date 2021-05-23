/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACheckAuthenticationRequirement : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *restrictionsOnCompanion;

+ (id)checkAuthenticationRequirement;
+ (id)checkAuthenticationRequirementWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
