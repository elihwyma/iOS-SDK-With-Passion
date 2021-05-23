/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXAnchorModelPBLaunchHistoryMetadata, NSString;

@interface ATXAnchorModelPBActionKeyMetadata : PBCodable

{
    ATXAnchorModelPBLaunchHistoryMetadata *_actionKeyLaunchHistory;
    NSString *_actionType;
}

@property (nonatomic, readonly) _Bool hasActionType;
@property (retain, nonatomic) NSString *actionType;
@property (nonatomic, readonly) _Bool hasActionKeyLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionKeyLaunchHistory;

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
