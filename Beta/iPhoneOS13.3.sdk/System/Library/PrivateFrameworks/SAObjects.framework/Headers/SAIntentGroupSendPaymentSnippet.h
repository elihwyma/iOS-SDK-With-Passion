/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)sendPaymentSnippet;
+ (id)sendPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
