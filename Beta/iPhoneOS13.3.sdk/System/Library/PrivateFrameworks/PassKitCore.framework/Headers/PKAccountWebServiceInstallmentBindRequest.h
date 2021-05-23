/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDecimalNumber, NSString, NSURL;

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSString *_applicationIdentifier;
    NSDecimalNumber *_bindingAmount;
    NSString *_merchantIdentifier;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSDecimalNumber *bindingAmount;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
