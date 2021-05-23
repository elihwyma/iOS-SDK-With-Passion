/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSError, NSURL;

@interface PKAMPCardRegistrationResponse : NSObject <Swift>

{
    NSData *_cardData;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
    NSError *_error;
}

@property (retain) NSData *cardData;
@property (retain) NSURL *brokerURL;
@property (retain) NSURL *paymentServicesURL;
@property (retain) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardData:(id)arg1 brokerURL:(id)arg2 paymentServicesURL:(id)arg3 error:(id)arg4;

@end
