/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest

{
    NSString *_passTypeID;
    NSString *_serialNumber;
}

@property (copy, nonatomic) NSString *passTypeID;
@property (copy, nonatomic) NSString *serialNumber;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2;

@end
