/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKPaymentProvisioningMethodMetadata;

@interface PKPaymentProvisioningMethodMetadataResponse

{
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
}

@property (nonatomic, readonly) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;

- (id)initWithData:(id)arg1;

@end
