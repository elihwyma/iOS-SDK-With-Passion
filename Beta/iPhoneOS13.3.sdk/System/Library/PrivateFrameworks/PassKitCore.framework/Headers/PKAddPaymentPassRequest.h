/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKAddPaymentPassRequest : NSObject <Swift>

{
    NSData *_encryptedPassData;
    NSData *_activationData;
    NSData *_ephemeralPublicKey;
    NSData *_wrappedKey;
    NSString *_encryptionVersion;
    NSData *_publicKeyHash;
    NSString *_issuerIdentifier;
    NSData *_nonce;
    NSString *_hostApplicationIdentifier;
    NSString *_hostApplicationVersion;
    NSData *_FPInfo;
}

@property (copy, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion;
@property (copy, nonatomic) NSData *FPInfo;
@property (copy, nonatomic) NSData *encryptedPassData;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *wrappedKey;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_hasRequiredThirdPartyFields:(_Bool)arg1;
- (_Bool)_hasRequiredFields:(_Bool)arg1;

@end
