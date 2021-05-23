/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject

{
    NSData *_cardData;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
}

@property (nonatomic, readonly) NSData *cardData;
@property (nonatomic, readonly) NSURL *brokerURL;
@property (nonatomic, readonly) NSURL *paymentServicesURL;

- (id)initWithCardRegistrationResponse:(id)arg1;

@end
