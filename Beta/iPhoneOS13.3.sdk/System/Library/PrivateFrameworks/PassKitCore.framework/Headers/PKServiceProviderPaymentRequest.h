/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <Swift>

{
    PKServiceProviderOrder *_serviceProviderOrder;
}

@property (nonatomic, readonly) PKServiceProviderOrder *serviceProviderOrder;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)merchantIdentifier;
- (id)initWithServiceProviderOrder:(id)arg1;

@end
