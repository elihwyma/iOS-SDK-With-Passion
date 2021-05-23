/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable

{
    double _progress;
    unsigned int _state;
    struct {
        unsigned int progress:1;
        unsigned int state:1;
    } _has;
}

@property (nonatomic) _Bool hasProgress;
@property (nonatomic) double progress;
@property (nonatomic) _Bool hasState;
@property (nonatomic) unsigned int state;

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
