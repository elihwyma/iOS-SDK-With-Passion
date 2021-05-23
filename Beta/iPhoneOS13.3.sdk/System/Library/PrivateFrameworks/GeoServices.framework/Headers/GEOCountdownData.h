/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOCountdownData : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _alternateCountdownTypes;
    CDStruct_9f2792e4 _timestampValues;
    NSMutableArray *_alternateFormatStrings;
    NSString *_separator;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateCountdownTypes:1;
        unsigned int read_timestampValues:1;
        unsigned int read_alternateFormatStrings:1;
        unsigned int read_separator:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alternateCountdownTypes:1;
        unsigned int wrote_timestampValues:1;
        unsigned int wrote_alternateFormatStrings:1;
        unsigned int wrote_separator:1;
        unsigned int wrote_timezone:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long countdownType;
@property (nonatomic, readonly) NSArray *timestamps;
@property (nonatomic, readonly) NSDictionary *alternativeFormatStringsByType;
@property (nonatomic, readonly) NSString *separator;
@property (nonatomic, readonly) unsigned long long timestampValuesCount;
@property (nonatomic, readonly) unsigned int *timestampValues;
@property (retain, nonatomic) NSMutableArray *alternateFormatStrings;
@property (nonatomic, readonly) unsigned long long alternateCountdownTypesCount;
@property (nonatomic, readonly) int *alternateCountdownTypes;
@property (nonatomic, readonly) _Bool hasSeparator;
@property (retain, nonatomic) NSString *separator;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)alternateFormatStringType;

- (id)init;
- (void)dealloc;
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
- (void)_readTimestampValues;
- (void)_addNoFlagsTimestampValue:(unsigned int)arg1;
- (void)_readAlternateFormatStrings;
- (void)_addNoFlagsAlternateFormatString:(id)arg1;
- (void)_readAlternateCountdownTypes;
- (void)_addNoFlagsAlternateCountdownType:(int)arg1;
- (void)_readSeparator;
- (void)clearTimestampValues;
- (unsigned int)timestampValueAtIndex:(unsigned long long)arg1;
- (void)addTimestampValue:(unsigned int)arg1;
- (unsigned long long)alternateFormatStringsCount;
- (void)clearAlternateFormatStrings;
- (id)alternateFormatStringAtIndex:(unsigned long long)arg1;
- (void)addAlternateFormatString:(id)arg1;
- (void)clearAlternateCountdownTypes;
- (int)alternateCountdownTypeAtIndex:(unsigned long long)arg1;
- (void)addAlternateCountdownType:(int)arg1;
- (void)setTimestampValues:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setAlternateCountdownTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)alternateCountdownTypesAsString:(int)arg1;
- (int)StringAsAlternateCountdownTypes:(id)arg1;
- (long long)_convertFrom:(int)arg1;

@end
