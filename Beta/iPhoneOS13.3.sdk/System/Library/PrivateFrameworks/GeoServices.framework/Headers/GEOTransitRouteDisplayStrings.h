/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_durationList;
    GEOFormattedString *_duration;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_advisorys:1;
        unsigned int read_badge:1;
        unsigned int read_durationList:1;
        unsigned int read_duration:1;
        unsigned int read_planningDescription:1;
        unsigned int read_travelDescription:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_advisorys:1;
        unsigned int wrote_badge:1;
        unsigned int wrote_durationList:1;
        unsigned int wrote_duration:1;
        unsigned int wrote_planningDescription:1;
        unsigned int wrote_travelDescription:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <GEOServerFormattedString> previewDurationFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> pickingDurationFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> planningDescriptionFormatString;
@property (nonatomic, readonly) id <GEOServerFormattedString> transitDescriptionFormatString;
@property (nonatomic, readonly) NSArray *transitAdvisories;
@property (nonatomic, readonly) id <GEOServerFormattedString> transitRouteBadge;
@property (nonatomic, readonly) _Bool hasPlanningDescription;
@property (retain, nonatomic) GEOFormattedString *planningDescription;
@property (nonatomic, readonly) _Bool hasDuration;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (nonatomic, readonly) _Bool hasDurationList;
@property (retain, nonatomic) GEOFormattedString *durationList;
@property (nonatomic, readonly) _Bool hasTravelDescription;
@property (retain, nonatomic) GEOFormattedString *travelDescription;
@property (retain, nonatomic) NSMutableArray *advisorys;
@property (nonatomic, readonly) _Bool hasBadge;
@property (retain, nonatomic) GEOFormattedString *badge;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)advisoryType;

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
- (void)_readDuration;
- (void)_readAdvisorys;
- (void)_addNoFlagsAdvisory:(id)arg1;
- (unsigned long long)advisorysCount;
- (void)clearAdvisorys;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (void)addAdvisory:(id)arg1;
- (void)_readPlanningDescription;
- (void)_readDurationList;
- (void)_readTravelDescription;
- (void)_readBadge;

@end
