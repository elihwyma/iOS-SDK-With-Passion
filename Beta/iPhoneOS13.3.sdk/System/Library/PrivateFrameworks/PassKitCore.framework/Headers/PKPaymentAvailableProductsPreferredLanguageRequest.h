/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAvailableProductsRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsPreferredLanguageRequest : PKPaymentAvailableProductsRequest

{
    NSString *_preferredLanguage;
}

@property (copy, nonatomic) NSString *preferredLanguage;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithType:(id)arg1 preferredLanguage:(id)arg2;

@end
