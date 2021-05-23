/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSData, NSString, NSUUID;

@interface SPPairingSession : NSObject

{
    _Bool _ackSuccess;
    NSUUID *_identifier;
    NSData *_nonce;
    NSUUID *_beaconId;
    NSString *_name;
    long long _roleId;
    NSString *_systemVersion;
    long long _vendorId;
    long long _productId;
    NSData *_ecid;
    NSData *_chipId;
    NSString *_serialNumber;
    NSData *_collaborativeKeyC1;
    NSData *_payloadSignature;
    NSData *_attestation;
    NSData *_systemPublicKey;
    NSData *_refKeyPublicKey;
    NSData *_collaborativeKeyC2;
    NSData *_serverSeed;
    NSData *_serverSignature;
    NSData *_serverPublicKey;
    NSString *_maskedAppleID;
    NSString *_userMessage;
    NSData *_baaLeaftCert;
    NSData *_baaIntermediateCert;
    NSData *_collaborativeKeyC3;
    NSData *_confirmSignature;
    NSData *_keyGenerationStatus;
    CLLocation *_pairingLocation;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconId;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (copy, nonatomic) NSData *ecid;
@property (copy, nonatomic) NSData *chipId;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSData *collaborativeKeyC1;
@property (copy, nonatomic) NSData *payloadSignature;
@property (copy, nonatomic) NSData *attestation;
@property (copy, nonatomic) NSData *systemPublicKey;
@property (copy, nonatomic) NSData *refKeyPublicKey;
@property (copy, nonatomic) NSData *collaborativeKeyC2;
@property (copy, nonatomic) NSData *serverSeed;
@property (copy, nonatomic) NSData *serverSignature;
@property (copy, nonatomic) NSData *serverPublicKey;
@property (copy, nonatomic) NSString *maskedAppleID;
@property (copy, nonatomic) NSString *userMessage;
@property (copy, nonatomic) NSData *baaLeaftCert;
@property (copy, nonatomic) NSData *baaIntermediateCert;
@property (copy, nonatomic) NSData *collaborativeKeyC3;
@property (copy, nonatomic) NSData *confirmSignature;
@property (nonatomic) _Bool ackSuccess;
@property (copy, nonatomic) NSData *keyGenerationStatus;
@property (copy, nonatomic) CLLocation *pairingLocation;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 nonce:(id)arg2;
- (void)updateWithSeed:(id)arg1 collaborativeKeyC2:(id)arg2 serverSignature:(id)arg3 serverPublicKey:(id)arg4 maskedAppleID:(id)arg5 userMessage:(id)arg6 baaIntermediateCert:(id)arg7 baaLeafCert:(id)arg8;
- (void)updateWithPayloadSignature:(id)arg1 attestation:(id)arg2 collaborativeKey:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 ecid:(id)arg7 chipId:(id)arg8 serialNumber:(id)arg9;
- (void)updateBeaconId:(id)arg1;
- (void)updateName:(id)arg1 roleId:(long long)arg2;
- (void)updatePairingLocation:(id)arg1;
- (void)updateAckSuccess:(_Bool)arg1;

@end
