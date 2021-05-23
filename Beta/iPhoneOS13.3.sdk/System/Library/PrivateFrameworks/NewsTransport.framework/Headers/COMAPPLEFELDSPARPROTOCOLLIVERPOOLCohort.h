/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable

{
    double _clicks;
    double _impressions;
    long long _timestamp;
    int _type;
    struct {
        unsigned int clicks:1;
        unsigned int impressions:1;
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) _Bool hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) long long timestamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
