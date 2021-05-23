/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceFundingSourcesRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
