/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;

+ (id)assistantDestroyed;
+ (id)assistantDestroyedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
