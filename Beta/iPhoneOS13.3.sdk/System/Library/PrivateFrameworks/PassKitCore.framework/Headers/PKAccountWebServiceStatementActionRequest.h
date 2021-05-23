/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceStatementActionRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_statementIdentifier;
    long long _action;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (nonatomic) long long action;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
