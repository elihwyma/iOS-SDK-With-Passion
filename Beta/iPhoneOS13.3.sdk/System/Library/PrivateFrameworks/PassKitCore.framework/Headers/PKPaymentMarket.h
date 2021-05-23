/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface PKPaymentMarket : NSObject <Swift>

{
    NSDictionary *_localizedNames;
    NSSet *_geoFences;
    long long _type;
    long long _classification;
    NSString *_identifier;
    NSString *_region;
    NSSet *_supportedCredentialTypes;
    NSSet *_expressCredentialTypes;
    NSSet *_supportedTransitNetworks;
    NSSet *_expressTransitNetworks;
}

@property (readonly) long long type;
@property (readonly) long long classification;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *region;
@property (copy, readonly) NSSet *supportedCredentialTypes;
@property (copy, readonly) NSSet *expressCredentialTypes;
@property (copy, readonly) NSSet *supportedTransitNetworks;
@property (copy, readonly) NSSet *expressTransitNetworks;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsLocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3;
- (double)shortestDistanceFromLocation:(id)arg1;
- (id)_geoFenceWithDictionary:(id)arg1;

@end
