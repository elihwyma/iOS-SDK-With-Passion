/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <Swift>

@property (copy, nonatomic) NSDictionary *operations;
@property (copy, nonatomic) NSString *providerId;
@property (nonatomic) _Bool supportsAuthentication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)endpoint;
+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
