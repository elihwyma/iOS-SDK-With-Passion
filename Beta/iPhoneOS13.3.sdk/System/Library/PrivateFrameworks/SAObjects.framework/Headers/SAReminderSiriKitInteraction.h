/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class SAIntentGroupProtobufMessage;

@interface SAReminderSiriKitInteraction : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)siriKitInteraction;
+ (id)siriKitInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
