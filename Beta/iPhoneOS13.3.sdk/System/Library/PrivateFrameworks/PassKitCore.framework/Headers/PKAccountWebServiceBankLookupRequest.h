/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest

{
    NSString *_countryCode;
    NSString *_query;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
