/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDictionary, NSString, NSURL;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_transactionIdentifier;
    NSDictionary *_answers;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSDictionary *answers;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
