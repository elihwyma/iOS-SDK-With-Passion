/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest

{
    NSString *_updatedSince;
}

@property (copy, nonatomic) NSString *updatedSince;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
