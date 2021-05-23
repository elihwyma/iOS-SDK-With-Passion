/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDHours, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackBusinessHours : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    unsigned long long _end;
    unsigned long long _start;
    GEOPDHours *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _hoursType;
    struct {
        unsigned int has_end:1;
        unsigned int has_start:1;
        unsigned int has_hoursType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_weeklyHours:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_end:1;
        unsigned int wrote_start:1;
        unsigned int wrote_weeklyHours:1;
        unsigned int wrote_hoursType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasWeeklyHours;
@property (retain, nonatomic) GEOPDHours *weeklyHours;
@property (nonatomic) _Bool hasStart;
@property (nonatomic) unsigned long long start;
@property (nonatomic) _Bool hasEnd;
@property (nonatomic) unsigned long long end;
@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic) _Bool hasHoursType;
@property (nonatomic) int hoursType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readWeeklyHours;
- (id)hoursTypeAsString:(int)arg1;
- (int)StringAsHoursType:(id)arg1;
- (void)_readComments;

@end
