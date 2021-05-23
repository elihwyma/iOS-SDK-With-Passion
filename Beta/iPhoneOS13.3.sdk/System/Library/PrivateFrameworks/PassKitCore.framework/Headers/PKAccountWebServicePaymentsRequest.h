/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDate, NSString, NSURL;

@interface PKAccountWebServicePaymentsRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSDate *_beginDate;
    NSDate *_endDate;
    long long _state;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long state;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
