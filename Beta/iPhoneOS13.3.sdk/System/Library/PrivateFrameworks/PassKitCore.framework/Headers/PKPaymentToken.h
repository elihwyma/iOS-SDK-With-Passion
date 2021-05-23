/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <Swift>

{
    PKPaymentMethod *_paymentMethod;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
    NSData *_paymentData;
    NSURL *_redeemURL;
    NSString *_retryNonce;
}

@property (retain, nonatomic) PKPaymentMethod *paymentMethod;
@property (copy, nonatomic) NSString *paymentInstrumentName;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (retain, nonatomic) NSURL *redeemURL;
@property (copy, nonatomic) NSString *retryNonce;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)simulatedTokenForNetwork:(id)arg1;
+ (id)paymentTokenWithProtobuf:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)protobuf;

@end
