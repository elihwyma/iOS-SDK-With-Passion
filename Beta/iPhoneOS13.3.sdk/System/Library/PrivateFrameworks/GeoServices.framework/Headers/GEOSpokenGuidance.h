/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSpokenGuidance : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_announcements;
    NSMutableArray *_timeGaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _alignment;
    unsigned int _endDesiredTime;
    unsigned int _exclusiveSetIdentifier;
    unsigned int _numChainedVariants;
    unsigned int _priority;
    unsigned int _repetitionInterval;
    unsigned int _startDesiredTime;
    _Bool _tapBeforeAnnouncement;
    struct {
        unsigned int has_alignment:1;
        unsigned int has_endDesiredTime:1;
        unsigned int has_exclusiveSetIdentifier:1;
        unsigned int has_numChainedVariants:1;
        unsigned int has_priority:1;
        unsigned int has_repetitionInterval:1;
        unsigned int has_startDesiredTime:1;
        unsigned int has_tapBeforeAnnouncement:1;
        unsigned int read_unknownFields:1;
        unsigned int read_announcements:1;
        unsigned int read_timeGaps:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_announcements:1;
        unsigned int wrote_timeGaps:1;
        unsigned int wrote_alignment:1;
        unsigned int wrote_endDesiredTime:1;
        unsigned int wrote_exclusiveSetIdentifier:1;
        unsigned int wrote_numChainedVariants:1;
        unsigned int wrote_priority:1;
        unsigned int wrote_repetitionInterval:1;
        unsigned int wrote_startDesiredTime:1;
        unsigned int wrote_tapBeforeAnnouncement:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *announcements;
@property (nonatomic) _Bool hasStartDesiredTime;
@property (nonatomic) unsigned int startDesiredTime;
@property (nonatomic) _Bool hasEndDesiredTime;
@property (nonatomic) unsigned int endDesiredTime;
@property (nonatomic) _Bool hasAlignment;
@property (nonatomic) int alignment;
@property (nonatomic) _Bool hasRepetitionInterval;
@property (nonatomic) unsigned int repetitionInterval;
@property (nonatomic) _Bool hasPriority;
@property (nonatomic) unsigned int priority;
@property (nonatomic) _Bool hasNumChainedVariants;
@property (nonatomic) unsigned int numChainedVariants;
@property (nonatomic) _Bool hasTapBeforeAnnouncement;
@property (nonatomic) _Bool tapBeforeAnnouncement;
@property (retain, nonatomic) NSMutableArray *timeGaps;
@property (nonatomic) _Bool hasExclusiveSetIdentifier;
@property (nonatomic) unsigned int exclusiveSetIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)announcementType;
+ (Class)timeGapType;

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
- (void)_readAnnouncements;
- (void)_addNoFlagsAnnouncement:(id)arg1;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (void)addAnnouncement:(id)arg1;
- (void)_readTimeGaps;
- (void)_addNoFlagsTimeGap:(id)arg1;
- (unsigned long long)timeGapsCount;
- (void)clearTimeGaps;
- (id)timeGapAtIndex:(unsigned long long)arg1;
- (void)addTimeGap:(id)arg1;
- (id)alignmentAsString:(int)arg1;
- (int)StringAsAlignment:(id)arg1;

@end
