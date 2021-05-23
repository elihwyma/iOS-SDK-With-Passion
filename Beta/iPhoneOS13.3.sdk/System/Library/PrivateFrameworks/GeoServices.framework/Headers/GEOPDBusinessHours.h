/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalizedString, GEOPDHoursThreshold, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHours : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _end;
    GEOPDHoursThreshold *_hoursThreshold;
    GEOLocalizedString *_message;
    GEOLocalizedString *_shortMessage;
    unsigned long long _start;
    NSMutableArray *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _hoursType;
    struct {
        unsigned int has_end:1;
        unsigned int has_start:1;
        unsigned int has_hoursType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_hoursThreshold:1;
        unsigned int read_message:1;
        unsigned int read_shortMessage:1;
        unsigned int read_weeklyHours:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_end:1;
        unsigned int wrote_hoursThreshold:1;
        unsigned int wrote_message:1;
        unsigned int wrote_shortMessage:1;
        unsigned int wrote_start:1;
        unsigned int wrote_weeklyHours:1;
        unsigned int wrote_hoursType:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *weeklyHours;
@property (nonatomic) _Bool hasStart;
@property (nonatomic) unsigned long long start;
@property (nonatomic) _Bool hasEnd;
@property (nonatomic) unsigned long long end;
@property (nonatomic, readonly) _Bool hasMessage;
@property (retain, nonatomic) GEOLocalizedString *message;
@property (nonatomic, readonly) _Bool hasShortMessage;
@property (retain, nonatomic) GEOLocalizedString *shortMessage;
@property (nonatomic) _Bool hasHoursType;
@property (nonatomic) int hoursType;
@property (nonatomic, readonly) _Bool hasHoursThreshold;
@property (retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)weeklyHoursType;
+ (id)businessHoursForPlaceData:(id)arg1;

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
- (void)_addNoFlagsWeeklyHours:(id)arg1;
- (void)_readMessage;
- (void)_readShortMessage;
- (void)_readHoursThreshold;
- (unsigned long long)weeklyHoursCount;
- (void)clearWeeklyHours;
- (id)weeklyHoursAtIndex:(unsigned long long)arg1;
- (void)addWeeklyHours:(id)arg1;
- (id)hoursTypeAsString:(int)arg1;
- (int)StringAsHoursType:(id)arg1;

@end
