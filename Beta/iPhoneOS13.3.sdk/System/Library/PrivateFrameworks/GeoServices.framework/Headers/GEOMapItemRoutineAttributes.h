/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _loiType;
    _Bool _isEventAllDay;
    struct {
        unsigned int has_eventDate:1;
        unsigned int has_loiType:1;
        unsigned int has_isEventAllDay:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventName:1;
        unsigned int read_loiIdentifierString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventDate:1;
        unsigned int wrote_eventName:1;
        unsigned int wrote_loiIdentifierString:1;
        unsigned int wrote_loiType:1;
        unsigned int wrote_isEventAllDay:1;
    } _flags;
}

@property (retain, nonatomic) NSUUID *loiIdentifier;
@property (nonatomic) _Bool hasLoiType;
@property (nonatomic) int loiType;
@property (nonatomic, readonly) _Bool hasEventName;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) _Bool hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) _Bool hasIsEventAllDay;
@property (nonatomic) _Bool isEventAllDay;
@property (nonatomic, readonly) _Bool hasLoiIdentifierString;
@property (retain, nonatomic) NSString *loiIdentifierString;
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
- (void)_readEventName;
- (void)_readLoiIdentifierString;
- (id)loiTypeAsString:(int)arg1;
- (int)StringAsLoiType:(id)arg1;

@end
