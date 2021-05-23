/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutState;

@interface SAHLSetWorkoutState : SADomainCommand

@property (retain, nonatomic) SAHLWorkoutState *targetWorkoutState;

+ (id)setWorkoutState;
+ (id)setWorkoutStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
