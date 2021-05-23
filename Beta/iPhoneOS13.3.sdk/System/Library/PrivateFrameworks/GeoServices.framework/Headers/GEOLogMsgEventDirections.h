/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventDirections : PBCodable

{
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    struct GEOSessionID _navSessionId;
    NSMutableArray *_directionsFeedbacks;
    NSMutableArray *_durationInNavigationModes;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _originalEta;
    _Bool _arrivedAtDestination;
    _Bool _preArrival;
    struct {
        unsigned int has_navigationAudioFeedback:1;
        unsigned int has_navSessionId:1;
        unsigned int has_durationOfTrip:1;
        unsigned int has_originalEta:1;
        unsigned int has_arrivedAtDestination:1;
        unsigned int has_preArrival:1;
        unsigned int read_directionsFeedbacks:1;
        unsigned int read_durationInNavigationModes:1;
        unsigned int read_finalLocation:1;
        unsigned int wrote_navigationAudioFeedback:1;
        unsigned int wrote_navSessionId:1;
        unsigned int wrote_directionsFeedbacks:1;
        unsigned int wrote_durationInNavigationModes:1;
        unsigned int wrote_durationOfTrip:1;
        unsigned int wrote_finalLocation:1;
        unsigned int wrote_originalEta:1;
        unsigned int wrote_arrivedAtDestination:1;
        unsigned int wrote_preArrival:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsFeedbacks;
@property (nonatomic, readonly) _Bool hasFinalLocation;
@property (retain, nonatomic) GEOLocation *finalLocation;
@property (nonatomic) _Bool hasArrivedAtDestination;
@property (nonatomic) _Bool arrivedAtDestination;
@property (nonatomic) _Bool hasNavigationAudioFeedback;
@property (nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback;
@property (nonatomic) _Bool hasDurationOfTrip;
@property (nonatomic) double durationOfTrip;
@property (nonatomic) _Bool hasNavSessionId;
@property (nonatomic) struct GEOSessionID navSessionId;
@property (retain, nonatomic) NSMutableArray *durationInNavigationModes;
@property (nonatomic) _Bool hasOriginalEta;
@property (nonatomic) unsigned int originalEta;
@property (nonatomic) _Bool hasPreArrival;
@property (nonatomic) _Bool preArrival;

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsFeedbackType;
+ (Class)durationInNavigationModeType;

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
- (void)_readDirectionsFeedbacks;
- (void)_addNoFlagsDirectionsFeedback:(id)arg1;
- (void)_readFinalLocation;
- (void)_readDurationInNavigationModes;
- (void)_addNoFlagsDurationInNavigationMode:(id)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)clearDirectionsFeedbacks;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (void)addDirectionsFeedback:(id)arg1;
- (unsigned long long)durationInNavigationModesCount;
- (void)clearDurationInNavigationModes;
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (void)addDurationInNavigationMode:(id)arg1;

@end
