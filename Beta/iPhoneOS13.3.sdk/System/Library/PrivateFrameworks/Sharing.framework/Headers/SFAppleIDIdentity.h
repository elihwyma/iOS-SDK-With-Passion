/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface SFAppleIDIdentity : NSObject

{
    NSString *_encDSID;
    NSString *_intermediateCertificateSerialNumber;
    _Bool _linkedToCurrentUser;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    NSString *_appleID;
    NSDate *_certificateExpirationDate;
    NSData *_certificatePersistentReference;
    NSDate *_intermediateCertificateExpirationDate;
    NSData *_intermediateCertificatePersistentReference;
    NSDate *_lastValidationAttemptDate;
    NSDate *_lastValidationDate;
    NSDate *_modificationDate;
    NSData *_privateKeyPersistentReference;
    NSString *_serialNumber;
}

@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (retain, nonatomic) NSDate *certificateExpirationDate;
@property (nonatomic, readonly) _Bool certificateExpired;
@property (retain, nonatomic) NSData *certificatePersistentReference;
@property (nonatomic, readonly) _Bool needsRenewal;
@property (retain, nonatomic) NSDate *intermediateCertificateExpirationDate;
@property (nonatomic, readonly) _Bool intermediateCertificateExpired;
@property (nonatomic, readonly) NSString *intermediateCertificateSerialNumber;
@property (retain, nonatomic) NSData *intermediateCertificatePersistentReference;
@property (nonatomic, readonly) _Bool isInvalid;
@property (retain, nonatomic) NSDate *lastValidationAttemptDate;
@property (retain, nonatomic) NSDate *lastValidationDate;
@property (nonatomic) _Bool linkedToCurrentUser;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSData *privateKeyPersistentReference;
@property (retain, nonatomic) NSString *serialNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentity;
- (_Bool)isEqualToIdentity:(id)arg1;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (struct __SecCertificate *)copyCertificateWithType:(long long)arg1;
- (_Bool)isDateInThePast:(id)arg1;
- (struct __SecCertificate *)copyIntermediateCertificate;
- (struct __SecKey *)copyPrivateKey;
- (void)removeFromKeychain;
- (int)verifyKeys;

@end
