/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAWaitForCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commandAceIds;

+ (id)waitForCommands;
+ (id)waitForCommandsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
