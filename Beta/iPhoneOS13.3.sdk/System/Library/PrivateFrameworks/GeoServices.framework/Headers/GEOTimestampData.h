/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, NSTimeZone, PBDataReader, PBUnknownFields;

@interface GEOTimestampData : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_formatPattern;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _timestampVal;
    _Bool _displayTimezone;
    struct {
        unsigned int has_timestampVal:1;
        unsigned int has_displayTimezone:1;
        unsigned int read_unknownFields:1;
        unsigned int read_formatPattern:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_formatPattern:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_timestampVal:1;
        unsigned int wrote_displayTimezone:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *formatPattern;
@property (nonatomic) _Bool hasTimestampVal;
@property (nonatomic) unsigned int timestampVal;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (nonatomic) _Bool hasDisplayTimezone;
@property (nonatomic) _Bool displayTimezone;
@property (nonatomic, readonly) _Bool hasFormatPattern;
@property (retain, nonatomic) NSString *formatPattern;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTimezone;
- (void)_readFormatPattern;
- (_Bool)displayTimeZone;

@end
