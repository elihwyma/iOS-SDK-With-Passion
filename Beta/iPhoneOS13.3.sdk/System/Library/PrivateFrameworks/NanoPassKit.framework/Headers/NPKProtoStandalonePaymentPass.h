/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePass, NPKProtoStandalonePaymentApplication, NSString;

@interface NPKProtoStandalonePaymentPass : PBCodable

{
    int _activationState;
    NSString *_deviceAccountIdentifier;
    NSString *_deviceAccountNumberSuffix;
    NPKProtoStandalonePaymentApplication *_devicePrimaryPaymentApplication;
    NPKProtoStandalonePass *_pass;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    struct {
        unsigned int activationState:1;
    } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePass *pass;
@property (nonatomic, readonly) _Bool hasPrimaryAccountIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (nonatomic, readonly) _Bool hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (nonatomic, readonly) _Bool hasDeviceAccountIdentifier;
@property (retain, nonatomic) NSString *deviceAccountIdentifier;
@property (nonatomic, readonly) _Bool hasDeviceAccountNumberSuffix;
@property (retain, nonatomic) NSString *deviceAccountNumberSuffix;
@property (nonatomic) _Bool hasActivationState;
@property (nonatomic) int activationState;
@property (nonatomic, readonly) _Bool hasDevicePrimaryPaymentApplication;
@property (retain, nonatomic) NPKProtoStandalonePaymentApplication *devicePrimaryPaymentApplication;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)activationStateAsString:(int)arg1;
- (int)StringAsActivationState:(id)arg1;

@end
