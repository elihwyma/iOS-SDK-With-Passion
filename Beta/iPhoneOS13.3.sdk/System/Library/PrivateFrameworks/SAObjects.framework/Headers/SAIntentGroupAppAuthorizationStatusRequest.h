/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appBundleIds;

+ (id)appAuthorizationStatusRequest;
+ (id)appAuthorizationStatusRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
