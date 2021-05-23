/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)assistantNotReady;
+ (id)assistantNotReadyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
