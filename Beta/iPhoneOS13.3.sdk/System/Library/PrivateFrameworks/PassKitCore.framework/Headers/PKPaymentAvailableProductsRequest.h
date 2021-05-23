/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest

{
    _Bool _ignoreCache;
    NSString *_type;
}

@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool ignoreCache;

- (id)initWithType:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
