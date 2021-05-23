/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable

{
    struct GEOSessionID _navSessionId;
    struct GEOSessionID _sessionId;
    GEOLocalTime *_eventTime;
    double _navSessionRelativeTimestamp;
    double _relativeTimestamp;
    unsigned int _sequenceNumber;
    struct {
        unsigned int has_navSessionId:1;
        unsigned int has_sessionId:1;
        unsigned int has_navSessionRelativeTimestamp:1;
        unsigned int has_relativeTimestamp:1;
        unsigned int has_sequenceNumber:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionId;
@property (nonatomic) struct GEOSessionID sessionId;
@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) _Bool hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) _Bool hasNavSessionId;
@property (nonatomic) struct GEOSessionID navSessionId;
@property (nonatomic) _Bool hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (nonatomic, readonly) _Bool hasEventTime;
@property (retain, nonatomic) GEOLocalTime *eventTime;

+ (_Bool)isValid:(id)arg1;

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

@end
