/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

{
    NSString *_referrerIdentifier;
}

@property (copy, nonatomic) NSString *referrerIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;

@end
