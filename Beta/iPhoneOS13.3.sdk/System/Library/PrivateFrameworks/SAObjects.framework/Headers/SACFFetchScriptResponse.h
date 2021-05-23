/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *flowScripts;

+ (id)fetchScriptResponse;
+ (id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
