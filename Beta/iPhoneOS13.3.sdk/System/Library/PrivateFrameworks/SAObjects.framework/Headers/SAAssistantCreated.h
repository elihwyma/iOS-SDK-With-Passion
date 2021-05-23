/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *speechId;

+ (id)assistantCreated;
+ (id)assistantCreatedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
