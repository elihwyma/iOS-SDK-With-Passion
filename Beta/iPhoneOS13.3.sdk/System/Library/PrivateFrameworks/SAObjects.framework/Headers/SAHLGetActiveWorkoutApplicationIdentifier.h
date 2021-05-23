/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAHLGetActiveWorkoutApplicationIdentifier : SABaseClientBoundCommand

+ (id)getActiveWorkoutApplicationIdentifier;
+ (id)getActiveWorkoutApplicationIdentifierWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
