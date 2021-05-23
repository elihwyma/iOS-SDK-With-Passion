/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scripts;

+ (id)clientFlowUpdateScriptsCommand;
+ (id)clientFlowUpdateScriptsCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
