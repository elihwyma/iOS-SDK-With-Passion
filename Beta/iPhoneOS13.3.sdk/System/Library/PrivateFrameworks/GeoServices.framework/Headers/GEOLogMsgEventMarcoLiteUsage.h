/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable

{
    NSMutableArray *_usageStates;
    unsigned int _totalNavTime;
    struct {
        unsigned int has_totalNavTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasTotalNavTime;
@property (nonatomic) unsigned int totalNavTime;
@property (retain, nonatomic) NSMutableArray *usageStates;

+ (_Bool)isValid:(id)arg1;
+ (Class)usageStatesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addUsageStates:(id)arg1;
- (unsigned long long)usageStatesCount;
- (void)clearUsageStates;
- (id)usageStatesAtIndex:(unsigned long long)arg1;

@end
