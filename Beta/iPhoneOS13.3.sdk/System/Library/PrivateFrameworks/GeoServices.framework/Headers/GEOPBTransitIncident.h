/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitArtwork, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncident : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_affectedEntitys;
    unsigned long long _incidentMuid;
    GEOPBTransitArtwork *_incidentTypeArtwork;
    NSString *_longDescriptionString;
    NSString *_messageForAllBlocking;
    NSString *_messageForIncidentType;
    NSString *_messageString;
    NSString *_shortDescriptionString;
    NSString *_titleString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _creationDatetime;
    unsigned int _endDatetime;
    int _iconEnum;
    unsigned int _incidentIndex;
    unsigned int _startDatetime;
    unsigned int _updatedDatetime;
    _Bool _blocking;
    struct {
        unsigned int has_incidentMuid:1;
        unsigned int has_creationDatetime:1;
        unsigned int has_endDatetime:1;
        unsigned int has_iconEnum:1;
        unsigned int has_incidentIndex:1;
        unsigned int has_startDatetime:1;
        unsigned int has_updatedDatetime:1;
        unsigned int has_blocking:1;
        unsigned int read_unknownFields:1;
        unsigned int read_affectedEntitys:1;
        unsigned int read_incidentTypeArtwork:1;
        unsigned int read_longDescriptionString:1;
        unsigned int read_messageForAllBlocking:1;
        unsigned int read_messageForIncidentType:1;
        unsigned int read_messageString:1;
        unsigned int read_shortDescriptionString:1;
        unsigned int read_titleString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_affectedEntitys:1;
        unsigned int wrote_incidentMuid:1;
        unsigned int wrote_incidentTypeArtwork:1;
        unsigned int wrote_longDescriptionString:1;
        unsigned int wrote_messageForAllBlocking:1;
        unsigned int wrote_messageForIncidentType:1;
        unsigned int wrote_messageString:1;
        unsigned int wrote_shortDescriptionString:1;
        unsigned int wrote_titleString:1;
        unsigned int wrote_creationDatetime:1;
        unsigned int wrote_endDatetime:1;
        unsigned int wrote_iconEnum:1;
        unsigned int wrote_incidentIndex:1;
        unsigned int wrote_startDatetime:1;
        unsigned int wrote_updatedDatetime:1;
        unsigned int wrote_blocking:1;
    } _flags;
}

@property (nonatomic) _Bool hasIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) _Bool hasIncidentMuid;
@property (nonatomic) unsigned long long incidentMuid;
@property (nonatomic) _Bool hasIconEnum;
@property (nonatomic) int iconEnum;
@property (nonatomic) _Bool hasStartDatetime;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic) _Bool hasEndDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) _Bool hasCreationDatetime;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) _Bool hasUpdatedDatetime;
@property (nonatomic) unsigned int updatedDatetime;
@property (retain, nonatomic) NSMutableArray *affectedEntitys;
@property (nonatomic) _Bool hasBlocking;
@property (nonatomic) _Bool blocking;
@property (nonatomic, readonly) _Bool hasLongDescriptionString;
@property (retain, nonatomic) NSString *longDescriptionString;
@property (nonatomic, readonly) _Bool hasShortDescriptionString;
@property (retain, nonatomic) NSString *shortDescriptionString;
@property (nonatomic, readonly) _Bool hasTitleString;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic, readonly) _Bool hasMessageString;
@property (retain, nonatomic) NSString *messageString;
@property (nonatomic, readonly) _Bool hasMessageForAllBlocking;
@property (retain, nonatomic) NSString *messageForAllBlocking;
@property (nonatomic, readonly) _Bool hasMessageForIncidentType;
@property (retain, nonatomic) NSString *messageForIncidentType;
@property (nonatomic, readonly) _Bool hasIncidentTypeArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *incidentTypeArtwork;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)affectedEntityType;

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
- (void)_readAffectedEntitys;
- (void)_addNoFlagsAffectedEntity:(id)arg1;
- (void)_readLongDescriptionString;
- (void)_readShortDescriptionString;
- (void)_readTitleString;
- (void)_readMessageString;
- (void)_readMessageForAllBlocking;
- (void)_readMessageForIncidentType;
- (void)_readIncidentTypeArtwork;
- (unsigned long long)affectedEntitysCount;
- (void)clearAffectedEntitys;
- (id)affectedEntityAtIndex:(unsigned long long)arg1;
- (void)addAffectedEntity:(id)arg1;
- (id)iconEnumAsString:(int)arg1;
- (int)StringAsIconEnum:(id)arg1;

@end
