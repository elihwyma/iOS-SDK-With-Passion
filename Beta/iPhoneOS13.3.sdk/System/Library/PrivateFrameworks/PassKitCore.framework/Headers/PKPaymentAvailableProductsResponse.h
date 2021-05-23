/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray;

@interface PKPaymentAvailableProductsResponse

{
    NSArray *_availableProducts;
}

@property (copy, nonatomic, readonly) NSArray *availableProducts;

- (_Bool)supportsSecureCoding;
- (id)initWithData:(id)arg1;
- (id)_generateProducts;

@end
