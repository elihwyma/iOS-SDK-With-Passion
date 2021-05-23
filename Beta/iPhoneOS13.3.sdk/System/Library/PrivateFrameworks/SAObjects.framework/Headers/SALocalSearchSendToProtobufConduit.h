/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSData, NSURL;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSData *rawRequest;
@property (nonatomic) long long timeoutInSeconds;

+ (id)sendToProtobufConduit;
+ (id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
