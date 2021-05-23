/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *endpointConfirmationTimestamp;

+ (id)confirmEndpoint;
+ (id)confirmEndpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
