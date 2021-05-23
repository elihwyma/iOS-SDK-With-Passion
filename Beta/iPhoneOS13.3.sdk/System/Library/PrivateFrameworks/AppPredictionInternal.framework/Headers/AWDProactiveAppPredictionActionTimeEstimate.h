/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimate : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_actions;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAction:(id)arg1;
- (unsigned long long)actionsCount;
- (void)clearActions;
- (id)actionAtIndex:(unsigned long long)arg1;

@end
