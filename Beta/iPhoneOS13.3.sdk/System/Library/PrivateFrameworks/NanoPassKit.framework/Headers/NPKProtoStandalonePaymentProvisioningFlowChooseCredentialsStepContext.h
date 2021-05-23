/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable

{
    NSMutableArray *_credentials;
    NSMutableArray *_remoteCredentials;
    _Bool _allowsManualEntry;
    struct {
        unsigned int allowsManualEntry:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *remoteCredentials;
@property (retain, nonatomic) NSMutableArray *credentials;
@property (nonatomic) _Bool hasAllowsManualEntry;
@property (nonatomic) _Bool allowsManualEntry;

+ (Class)remoteCredentialsType;
+ (Class)credentialsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCredentials:(id)arg1;
- (void)addRemoteCredentials:(id)arg1;
- (unsigned long long)remoteCredentialsCount;
- (void)clearRemoteCredentials;
- (id)remoteCredentialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)credentialsCount;
- (void)clearCredentials;
- (id)credentialsAtIndex:(unsigned long long)arg1;

@end
