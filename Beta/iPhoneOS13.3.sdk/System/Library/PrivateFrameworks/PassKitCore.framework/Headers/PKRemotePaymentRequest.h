/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKPaymentRequest, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <Swift>

{
    PKRemoteDevice *_device;
    PKPaymentRequest *_paymentRequest;
    NSString *_selectedApplicationIdentifier;
    NSString *_identifier;
}

@property (nonatomic, readonly) PKRemoteDevice *device;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (copy, nonatomic) NSString *selectedApplicationIdentifier;
@property (nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (_Bool)isEqualToRemoteRequest:(id)arg1;

@end
