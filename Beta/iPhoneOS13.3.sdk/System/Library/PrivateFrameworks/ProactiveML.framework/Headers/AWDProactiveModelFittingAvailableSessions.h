/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingAvailableSessions : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_perModelStats;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *perModelStats;

+ (Class)perModelStatsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPerModelStats;
- (void)addPerModelStats:(id)arg1;
- (unsigned long long)perModelStatsCount;
- (id)perModelStatsAtIndex:(unsigned long long)arg1;

@end
