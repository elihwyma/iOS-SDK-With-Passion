/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable

{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _uiNotification;
    struct {
        unsigned int has_earliestArrivalOffset:1;
        unsigned int has_earliestDepartureOffset:1;
        unsigned int has_latestArrivalOffset:1;
        unsigned int has_latestDepartureOffset:1;
        unsigned int has_arrival:1;
        unsigned int has_departure:1;
        unsigned int has_numberOfReroutes:1;
        unsigned int has_uiNotification:1;
    } _flags;
}

@property (nonatomic) _Bool hasDeparture;
@property (nonatomic) int departure;
@property (nonatomic) _Bool hasArrival;
@property (nonatomic) int arrival;
@property (nonatomic) _Bool hasNumberOfReroutes;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) _Bool hasUiNotification;
@property (nonatomic) int uiNotification;
@property (nonatomic) _Bool hasEarliestDepartureOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) _Bool hasLatestDepartureOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) _Bool hasEarliestArrivalOffset;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) _Bool hasLatestArrivalOffset;
@property (nonatomic) double latestArrivalOffset;

+ (_Bool)isValid:(id)arg1;

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
- (id)departureAsString:(int)arg1;
- (int)StringAsDeparture:(id)arg1;
- (id)arrivalAsString:(int)arg1;
- (int)StringAsArrival:(id)arg1;
- (id)uiNotificationAsString:(int)arg1;
- (int)StringAsUiNotification:(id)arg1;

@end
