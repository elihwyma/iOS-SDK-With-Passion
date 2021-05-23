/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebserviceCustomizePhysicalCardRequest : PKAccountWebServiceRequest

{
    NSURL *_baseURL;
    NSString *_accountIdentifier;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *accountIdentifier;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
