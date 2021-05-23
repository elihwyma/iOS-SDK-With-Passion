/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PKPaymentDigitalIssuanceMetadata : NSObject

{
    NSString *_serviceProviderIdentifier;
    NSString *_serviceProviderCountryCode;
    NSArray *_serviceProviderSupportedNetworks;
    NSArray *_serviceProviderCapabilities;
    NSDictionary *_serviceProviderDict;
    NSString *_action;
    NSString *_merchantID;
    NSArray *_defaultSuggestions;
}

@property (copy, nonatomic, readonly) NSString *serviceProviderIdentifier;
@property (copy, nonatomic, readonly) NSString *serviceProviderCountryCode;
@property (copy, nonatomic, readonly) NSArray *serviceProviderSupportedNetworks;
@property (copy, nonatomic, readonly) NSArray *serviceProviderCapabilities;
@property (copy, nonatomic, readonly) NSDictionary *serviceProviderDict;
@property (copy, nonatomic, readonly) NSString *action;
@property (copy, nonatomic, readonly) NSString *merchantID;
@property (copy, nonatomic, readonly) NSArray *defaultSuggestions;

- (id)initWithDictionary:(id)arg1;

@end
