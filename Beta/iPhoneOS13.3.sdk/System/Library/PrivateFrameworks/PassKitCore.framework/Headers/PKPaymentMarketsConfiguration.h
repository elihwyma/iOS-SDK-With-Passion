/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSSet, NSString, NSURL;

@interface PKPaymentMarketsConfiguration : NSObject <Swift>

{
    NSSet *_markets;
    NSString *_version;
    NSURL *_url;
}

@property (copy, readonly) NSSet *markets;
@property (copy, readonly) NSString *version;
@property (copy, readonly) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (void)paymentMarketsConfigurationWithURL:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 url:(id)arg2 forDeviceClass:(id)arg3 version:(id)arg4;
- (id)marketsForLocation:(id)arg1;
- (id)marketsForLocation:(id)arg1 ofType:(long long)arg2;
- (id)closestMarketForLocation:(id)arg1;
- (id)marketsForRegions:(id)arg1;
- (id)supportedCredentialTypesForLocation:(id)arg1;
- (id)expressCredentialTypesForLocation:(id)arg1;
- (id)supportedTransitNetworksForLocation:(id)arg1;
- (id)expressTransitNetworksForLocation:(id)arg1;

@end
