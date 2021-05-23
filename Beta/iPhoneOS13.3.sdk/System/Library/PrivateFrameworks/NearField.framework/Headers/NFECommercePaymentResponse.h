/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface NFECommercePaymentResponse : NSObject

{
    NSString *_transactionIdentifier;
    NSData *_transactionData;
    NSDictionary *_certs;
    NSArray *_SEPcerts;
    NSData *_confirmationBlobHash;
    NSData *_confirmationBlobSignature;
    long long _confirmationBlobVersion;
}

@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) NSData *transactionData;
@property (nonatomic, readonly) NSDictionary *certs;
@property (nonatomic, readonly) NSArray *SEPcerts;
@property (nonatomic, readonly) NSData *confirmationBlobHash;
@property (nonatomic, readonly) NSData *confirmationBlobSignature;
@property (nonatomic, readonly) long long confirmationBlobVersion;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCerts:(id)arg1;
- (void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2 version:(unsigned long long)arg3;
- (void)setSEPCerts:(id)arg1;

@end
