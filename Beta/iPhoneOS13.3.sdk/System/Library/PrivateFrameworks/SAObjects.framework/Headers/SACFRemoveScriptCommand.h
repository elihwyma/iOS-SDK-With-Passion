/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scriptIdentifiers;

+ (id)removeScriptCommand;
+ (id)removeScriptCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
