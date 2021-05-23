/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, TransparencyManagedDataStore, TransparencyTrustedKeyStore, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject

{
    int _vrfType;
    VRFPublicKey *_vrfKey;
    TransparencyTrustedKeyStore *_appKeyStore;
    TransparencyTrustedKeyStore *_tltKeyStore;
    unsigned long long _patLogBeginningMs;
    unsigned long long _tltLogBeginningMs;
    NSString *_application;
    TransparencyManagedDataStore *_dataStore;
    NSData *_patConfigProof;
    NSDictionary *_trustedAppSigningKeys;
    NSArray *_trustedAppLeafs;
    NSDictionary *_trustedTltSigningKeys;
    NSArray *_trustedTltLeafs;
    NSArray *_trustedIntermediates;
}

@property (retain) NSString *application;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSData *patConfigProof;
@property (retain) VRFPublicKey *vrfKey;
@property int vrfType;
@property (retain) NSDictionary *trustedAppSigningKeys;
@property (retain) NSArray *trustedAppLeafs;
@property (retain) NSDictionary *trustedTltSigningKeys;
@property (retain) NSArray *trustedTltLeafs;
@property (retain) NSArray *trustedIntermediates;
@property (retain) TransparencyTrustedKeyStore *appKeyStore;
@property (retain) TransparencyTrustedKeyStore *tltKeyStore;
@property unsigned long long tltLogBeginningMs;
@property unsigned long long patLogBeginningMs;
@property (readonly) _Bool ready;

- (void)clearState:(id *)arg1;
- (_Bool)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id *)arg4;
- (id)copyVRFKeyFromConfigProof:(id)arg1 error:(id *)arg2;
- (_Bool)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 error:(id *)arg5;
- (_Bool)processPublicKeysResponse:(id)arg1 error:(id *)arg2;
- (void)startLogBeginTimesSampler;
- (_Bool)processDiskState:(id)arg1 error:(id *)arg2;
- (id)copyKeyStoreState;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id *)arg4;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id *)arg4;

@end
