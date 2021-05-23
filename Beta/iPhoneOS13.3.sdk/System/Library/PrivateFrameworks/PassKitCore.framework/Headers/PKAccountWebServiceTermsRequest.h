/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsRequest : PKAccountWebServiceRequest

{
    _Bool _termsAccepted;
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_termsIdentifier;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (nonatomic) _Bool termsAccepted;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
