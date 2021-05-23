/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class HMPBCharacteristicReference, NSData;

@interface HMPBCharacteristicWriteAction : PBCodable

{
    NSData *_actionUUID;
    HMPBCharacteristicReference *_characteristicReference;
    NSData *_targetValue;
}

@property (nonatomic, readonly) _Bool hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (nonatomic, readonly) _Bool hasTargetValue;
@property (retain, nonatomic) NSData *targetValue;
@property (nonatomic, readonly) _Bool hasCharacteristicReference;
@property (retain, nonatomic) HMPBCharacteristicReference *characteristicReference;

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
