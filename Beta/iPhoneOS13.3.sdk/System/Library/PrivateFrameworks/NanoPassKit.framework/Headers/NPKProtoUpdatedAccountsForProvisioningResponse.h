/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoUpdatedAccountsForProvisioningResponse : PBCodable

{
    NSData *_accountsOnDeviceData;
    NSData *_accountsRequiringProvisioningData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasAccountsRequiringProvisioningData;
@property (retain, nonatomic) NSData *accountsRequiringProvisioningData;
@property (nonatomic, readonly) _Bool hasAccountsOnDeviceData;
@property (retain, nonatomic) NSData *accountsOnDeviceData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
