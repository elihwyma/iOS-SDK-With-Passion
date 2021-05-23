/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointService : SAEndpoint

@property (copy, nonatomic) NSString *serverUrl;

+ (id)endpointService;
+ (id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
