/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedbackLogMessage : PBCodable

{
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _arrivedAtDestination;
    CDStruct_57366784 _flags;
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

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsFeedbackType;

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
- (unsigned long long)directionsFeedbacksCount;
- (void)clearDirectionsFeedbacks;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (void)addDirectionsFeedback:(id)arg1;

@end
