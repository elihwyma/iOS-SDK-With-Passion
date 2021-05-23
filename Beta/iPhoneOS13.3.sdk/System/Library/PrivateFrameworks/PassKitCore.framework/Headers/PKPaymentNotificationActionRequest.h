/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest

{
    NSString *_requestID;
    NSString *_action;
}

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *action;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
