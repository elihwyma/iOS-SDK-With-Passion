/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsDataRequest : PKAccountWebServiceRequest

{
    NSURL *_baseURL;
    NSString *_accountIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsDataFormat;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
