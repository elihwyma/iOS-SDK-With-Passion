/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXAnchorModelPBActionKeyMetadata, ATXAnchorModelPBAppLaunchMetadata, NSMutableArray;

@interface ATXAnchorModelPBActionMetadata : PBCodable

{
    ATXAnchorModelPBActionKeyMetadata *_actionKeyMetadata;
    int _actionType;
    NSMutableArray *_actionUUIDMetadatas;
    ATXAnchorModelPBAppLaunchMetadata *_appLaunchMetadata;
    struct {
        unsigned int actionType:1;
    } _has;
}

@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic, readonly) _Bool hasAppLaunchMetadata;
@property (retain, nonatomic) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata;
@property (nonatomic, readonly) _Bool hasActionKeyMetadata;
@property (retain, nonatomic) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata;
@property (retain, nonatomic) NSMutableArray *actionUUIDMetadatas;

+ (Class)actionUUIDMetadataType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;
- (void)clearActionUUIDMetadatas;
- (void)addActionUUIDMetadata:(id)arg1;
- (unsigned long long)actionUUIDMetadatasCount;
- (id)actionUUIDMetadataAtIndex:(unsigned long long)arg1;

@end
