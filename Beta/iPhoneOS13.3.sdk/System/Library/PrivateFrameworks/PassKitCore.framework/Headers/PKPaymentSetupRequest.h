/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, PKPaymentSetupConfiguration;

@interface PKPaymentSetupRequest : NSObject <Swift>

{
    PKPaymentSetupConfiguration *_configuration;
    NSArray *_paymentSetupFeatures;
}

@property (retain, nonatomic) PKPaymentSetupConfiguration *configuration;
@property (retain, nonatomic) NSArray *paymentSetupFeatures;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
