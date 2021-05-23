/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString, PKSecureElementCertificateSet;

@interface PKWrappedPayment : NSObject <Swift>

{
    NSString *_transactionIdentifier;
    NSData *_transactionData;
    NSData *_transactionInstructionsSignature;
    PKSecureElementCertificateSet *_certificates;
    NSString *_merchantCountryCode;
    NSString *_kextBlacklistVersion;
    NSData *_enrollmentSignature;
}

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSData *transactionInstructionsSignature;
@property (copy, nonatomic) PKSecureElementCertificateSet *certificates;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (copy, nonatomic) NSData *enrollmentSignature;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
