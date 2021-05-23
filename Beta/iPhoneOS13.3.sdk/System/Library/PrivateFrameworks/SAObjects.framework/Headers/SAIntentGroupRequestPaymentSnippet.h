/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupRequestPaymentSnippet : SAUISnippet

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;

+ (id)requestPaymentSnippet;
+ (id)requestPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
