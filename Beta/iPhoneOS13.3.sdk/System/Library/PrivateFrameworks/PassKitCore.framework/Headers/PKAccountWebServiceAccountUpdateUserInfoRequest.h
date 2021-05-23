/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class CNContact, NSString, NSURL;

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    CNContact *_contact;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) CNContact *contact;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
