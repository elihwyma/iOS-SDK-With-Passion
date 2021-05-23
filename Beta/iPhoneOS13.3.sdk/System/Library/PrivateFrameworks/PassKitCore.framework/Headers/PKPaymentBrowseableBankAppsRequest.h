/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest

{
    NSString *_region;
}

@property (copy, nonatomic) NSString *region;

- (id)initWithRegion:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
