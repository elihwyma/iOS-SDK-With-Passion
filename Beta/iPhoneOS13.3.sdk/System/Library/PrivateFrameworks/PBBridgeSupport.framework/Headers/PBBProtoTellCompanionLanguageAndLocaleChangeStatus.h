/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PBBProtoTellCompanionLanguageAndLocaleChangeStatus : PBCodable

{
    double _status;
    struct {
        unsigned int status:1;
    } _has;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) double status;

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
