/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentBankLookupRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_countryCode;
    NSString *_query;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *query;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithCountryCode:(id)arg1 query:(id)arg2;

@end
