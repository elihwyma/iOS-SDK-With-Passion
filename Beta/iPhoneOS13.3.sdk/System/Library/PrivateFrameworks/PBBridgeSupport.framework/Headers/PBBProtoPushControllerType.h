/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PBBProtoPushControllerType : PBCodable

{
    double _intendedFireDate;
    unsigned int _controllerType;
    CDStruct_88f5f09d _has;
}

@property (nonatomic) unsigned int controllerType;
@property (nonatomic) _Bool hasIntendedFireDate;
@property (nonatomic) double intendedFireDate;

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
