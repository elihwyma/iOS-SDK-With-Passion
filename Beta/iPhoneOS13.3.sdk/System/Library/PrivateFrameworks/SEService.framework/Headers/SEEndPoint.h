/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SEEndPointConfiguration;

@interface SEEndPoint : NSObject

{
    NSString *_identifier;
    NSDictionary *_metaData;
    NSString *_subjectIdentifier;
    NSData *_publicKey;
    NSData *_publicKeyIdentifier;
    SEEndPointConfiguration *_configuration;
    NSData *_readerIdentifier;
    NSData *_readerPublicKey;
    NSArray *_authorizedKeys;
    NSNumber *_confidentialMailBoxSize;
    NSNumber *_privateMailBoxSize;
    NSNumber *_counter;
    NSArray *_certificates;
    NSData *_revocationAttestation;
    NSData *_keyIdentifier;
    NSString *_issuerIdentifier;
    NSString *_privacyKeyIdentifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *subjectIdentifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *publicKeyIdentifier;
@property (retain, nonatomic) SEEndPointConfiguration *configuration;
@property (retain, nonatomic) NSData *readerIdentifier;
@property (retain, nonatomic) NSData *readerPublicKey;
@property (retain, nonatomic) NSData *keyIdentifier;
@property (retain, nonatomic) NSArray *authorizedKeys;
@property (retain, nonatomic) NSNumber *confidentialMailBoxSize;
@property (retain, nonatomic) NSNumber *privateMailBoxSize;
@property (retain, nonatomic) NSNumber *counter;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSString *issuerIdentifier;
@property (retain, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) NSData *revocationAttestation;
@property (retain, nonatomic) NSString *privacyKeyIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id *)arg3;
+ (id)decodeWithData:(id)arg1 error:(id *)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodeWithError:(id *)arg1;
- (void)addCertificateChain:(id)arg1;
- (id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4;
- (void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(_Bool)arg5 wiredVisibility:(_Bool)arg6 contactlessLocalValidation:(_Bool)arg7 wiredLocalValidation:(_Bool)arg8;

@end
