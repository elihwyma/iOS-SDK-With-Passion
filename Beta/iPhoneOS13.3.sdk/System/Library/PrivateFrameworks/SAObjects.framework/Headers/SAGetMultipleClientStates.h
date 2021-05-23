/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientStateGetters;

+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
