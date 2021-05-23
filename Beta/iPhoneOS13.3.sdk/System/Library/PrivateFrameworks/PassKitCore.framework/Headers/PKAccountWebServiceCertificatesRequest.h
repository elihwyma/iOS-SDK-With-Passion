/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest

{
    NSURL *_baseURL;
    unsigned long long _destination;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long destination;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
