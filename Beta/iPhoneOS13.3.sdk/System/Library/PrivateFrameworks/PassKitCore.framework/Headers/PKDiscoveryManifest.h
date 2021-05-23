/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, PKDiscoveryMessagesMetadata;

@interface PKDiscoveryManifest : NSObject <Swift>

{
    long long _version;
    NSArray *_rules;
    NSArray *_discoveryItems;
    PKDiscoveryMessagesMetadata *_messagesMetadata;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) NSArray *discoveryItems;
@property (nonatomic, readonly) PKDiscoveryMessagesMetadata *messagesMetadata;

+ (_Bool)supportsSecureCoding;
+ (id)manifestFromURL:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4;

@end
