/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface TPPeerStableInfo : NSObject

{
    unsigned long long _clock;
    unsigned long long _policyVersion;
    NSString *_policyHash;
    NSDictionary *_policySecrets;
    NSString *_deviceName;
    NSString *_serialNumber;
    NSString *_osVersion;
    NSData *_recoverySigningPublicKey;
    NSData *_recoveryEncryptionPublicKey;
    NSData *_data;
    NSData *_sig;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSString *policyHash;
@property (retain, nonatomic) NSDictionary *policySecrets;
@property (retain, nonatomic) NSData *recoverySigningPublicKey;
@property (retain, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *osVersion;

+ (id)stableInfoWithClock:(unsigned long long)arg1 policyVersion:(unsigned long long)arg2 policyHash:(id)arg3 policySecrets:(id)arg4 deviceName:(id)arg5 serialNumber:(id)arg6 osVersion:(id)arg7 signingKeyPair:(id)arg8 recoverySigningPubKey:(id)arg9 recoveryEncryptionPubKey:(id)arg10 error:(id *)arg11;
+ (id)stableInfoWithData:(id)arg1 sig:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (_Bool)checkSignatureWithKey:(id)arg1;
- (id)initWithClock:(unsigned long long)arg1 policyVersion:(unsigned long long)arg2 policyHash:(id)arg3 policySecrets:(id)arg4 deviceName:(id)arg5 serialNumber:(id)arg6 osVersion:(id)arg7 recoverySigningPubKey:(id)arg8 recoveryEncryptionPubKey:(id)arg9 data:(id)arg10 sig:(id)arg11;
- (_Bool)isEqualToPeerStableInfo:(id)arg1;

@end
