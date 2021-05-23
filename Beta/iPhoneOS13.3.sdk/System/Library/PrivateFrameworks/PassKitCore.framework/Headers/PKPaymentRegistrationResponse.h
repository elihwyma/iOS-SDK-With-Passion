/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse

{
    NSString *_deviceIdentifier;
    NSNumber *_cardsOnFile;
    NSNumber *_maxCards;
    NSString *_primaryRegion;
    NSDictionary *_regions;
    NSString *_environmentName;
    NSURL *_brokerURL;
    NSURL *_trustedServiceManagerURL;
    NSURL *_paymentServicesURL;
    NSArray *_certificates;
}

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSNumber *cardsOnFile;
@property (copy, nonatomic) NSNumber *maxCards;
@property (copy, nonatomic) NSDictionary *regions;
@property (copy, nonatomic) NSString *environmentName;
@property (copy, nonatomic) NSURL *brokerURL;
@property (copy, nonatomic) NSURL *trustedServiceManagerURL;
@property (copy, nonatomic) NSURL *paymentServicesURL;
@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic, readonly) NSString *primaryRegion;

- (id)initWithData:(id)arg1;

@end
