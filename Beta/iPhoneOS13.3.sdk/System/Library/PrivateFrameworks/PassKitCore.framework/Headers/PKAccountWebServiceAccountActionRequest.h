/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountAction;

@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    PKAccountAction *_action;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKAccountAction *action;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
