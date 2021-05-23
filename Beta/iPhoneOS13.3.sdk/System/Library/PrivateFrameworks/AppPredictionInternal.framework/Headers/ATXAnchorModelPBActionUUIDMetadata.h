/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable

{
    long long _actionUUID;
    long long _slotHash;
    ATXAnchorModelPBLaunchHistoryMetadata *_actionUUIDLaunchHistory;
    unsigned int _paramCount;
    struct {
        unsigned int actionUUID:1;
        unsigned int slotHash:1;
        unsigned int paramCount:1;
    } _has;
}

@property (nonatomic) _Bool hasActionUUID;
@property (nonatomic) long long actionUUID;
@property (nonatomic) _Bool hasSlotHash;
@property (nonatomic) long long slotHash;
@property (nonatomic) _Bool hasParamCount;
@property (nonatomic) unsigned int paramCount;
@property (nonatomic, readonly) _Bool hasActionUUIDLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionUUIDLaunchHistory;

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
