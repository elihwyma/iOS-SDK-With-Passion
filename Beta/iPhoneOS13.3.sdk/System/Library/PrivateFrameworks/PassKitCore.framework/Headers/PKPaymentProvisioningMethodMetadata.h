/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject

{
    NSString *_productIdentifier;
    NSString *_currency;
    unsigned long long _depositType;
    NSDecimalNumber *_depositAmount;
    NSDecimalNumber *_minLoadedBalance;
    NSDecimalNumber *_maxLoadedBalance;
    NSArray *_requiredFields;
    NSDictionary *_readerModeMetadata;
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
    NSDictionary *_readerModeResources;
    NSDecimalNumber *_minimumReaderModeBalance;
}

@property (copy, nonatomic, readonly) NSString *productIdentifier;
@property (copy, nonatomic, readonly) NSString *currency;
@property (nonatomic, readonly) unsigned long long depositType;
@property (copy, nonatomic, readonly) NSDecimalNumber *depositAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *minLoadedBalance;
@property (copy, nonatomic, readonly) NSDecimalNumber *maxLoadedBalance;
@property (copy, nonatomic, readonly) NSArray *requiredFields;
@property (copy, nonatomic, readonly) NSDictionary *readerModeMetadata;
@property (nonatomic, readonly) PKPaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (copy, nonatomic, readonly) NSDictionary *readerModeResources;
@property (copy, nonatomic, readonly) NSDecimalNumber *minimumReaderModeBalance;

- (id)initWithDictionary:(id)arg1;

@end
