/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@interface SAIntentGroupUnsupportedIntentResponse : SAIntentGroupIntentInvocationResponse

+ (id)unsupportedIntentResponse;
+ (id)unsupportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
