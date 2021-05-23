/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;

+ (id)appEntitlementRequest;
+ (id)appEntitlementRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
