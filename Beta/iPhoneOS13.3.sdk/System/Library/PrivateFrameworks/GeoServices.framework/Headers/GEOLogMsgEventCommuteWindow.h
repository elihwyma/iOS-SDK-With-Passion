/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable

{
    NSMutableArray *_predictedDestinations;
    double _startTime;
    unsigned int _duration;
    int _endReason;
    unsigned int _numberOfAlertingResponses;
    unsigned int _numberOfDoomRoutingRequests;
    unsigned int _predictedExitTime;
    struct {
        unsigned int has_startTime:1;
        unsigned int has_duration:1;
        unsigned int has_endReason:1;
        unsigned int has_numberOfAlertingResponses:1;
        unsigned int has_numberOfDoomRoutingRequests:1;
        unsigned int has_predictedExitTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasPredictedExitTime;
@property (nonatomic) unsigned int predictedExitTime;
@property (nonatomic) _Bool hasEndReason;
@property (nonatomic) int endReason;
@property (retain, nonatomic) NSMutableArray *predictedDestinations;
@property (nonatomic) _Bool hasNumberOfDoomRoutingRequests;
@property (nonatomic) unsigned int numberOfDoomRoutingRequests;
@property (nonatomic) _Bool hasNumberOfAlertingResponses;
@property (nonatomic) unsigned int numberOfAlertingResponses;

+ (_Bool)isValid:(id)arg1;
+ (Class)predictedDestinationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addPredictedDestination:(id)arg1;
- (unsigned long long)predictedDestinationsCount;
- (void)clearPredictedDestinations;
- (id)predictedDestinationAtIndex:(unsigned long long)arg1;
- (id)endReasonAsString:(int)arg1;
- (int)StringAsEndReason:(id)arg1;

@end
