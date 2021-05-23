/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularDownlinkIpPacketFilterStatus : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _bearerContextId;
    NSMutableArray *_filters;
    unsigned int _subsId;
    _Bool _isActivated;
    _Bool _isEchoReqBlocked;
    struct {
        unsigned int timestamp:1;
        unsigned int bearerContextId:1;
        unsigned int subsId:1;
        unsigned int isActivated:1;
        unsigned int isEchoReqBlocked:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasBearerContextId;
@property (nonatomic) unsigned int bearerContextId;
@property (nonatomic) _Bool hasIsActivated;
@property (nonatomic) _Bool isActivated;
@property (nonatomic) _Bool hasIsEchoReqBlocked;
@property (nonatomic) _Bool isEchoReqBlocked;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)filtersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)filtersCount;
- (void)clearFilters;
- (void)addFilters:(id)arg1;
- (id)filtersAtIndex:(unsigned long long)arg1;

@end
