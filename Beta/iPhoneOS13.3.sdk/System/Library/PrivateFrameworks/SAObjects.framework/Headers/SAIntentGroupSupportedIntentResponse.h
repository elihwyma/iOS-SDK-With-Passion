/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *useCaseId;

+ (id)supportedIntentResponse;
+ (id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
