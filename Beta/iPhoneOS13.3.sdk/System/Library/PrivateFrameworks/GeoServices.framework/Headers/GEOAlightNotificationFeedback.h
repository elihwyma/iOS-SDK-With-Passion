/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOAlightNotificationFeedback : PBCodable

{
    unsigned long long _alightStopMuid;
    double _arrivedAtTimestamp;
    double _lastDetectedLocationHorizontalAccuracy;
    double _lastDetectedLocationTimestamp;
    unsigned long long _lineMuid;
    unsigned long long _previousStopMuid;
    double _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _triggeredLocationTraversalPercent;
    int _trigger;
    _Bool _arrivalDetected;
    _Bool _displayed;
    _Bool _triggered;
    struct {
        unsigned int has_alightStopMuid:1;
        unsigned int has_arrivedAtTimestamp:1;
        unsigned int has_lastDetectedLocationHorizontalAccuracy:1;
        unsigned int has_lastDetectedLocationTimestamp:1;
        unsigned int has_lineMuid:1;
        unsigned int has_previousStopMuid:1;
        unsigned int has_triggeredTimestamp:1;
        unsigned int has_lastDetectedLocationTraversalPercent:1;
        unsigned int has_stepID:1;
        unsigned int has_triggeredLocationTraversalPercent:1;
        unsigned int has_trigger:1;
        unsigned int has_arrivalDetected:1;
        unsigned int has_displayed:1;
        unsigned int has_triggered:1;
    } _flags;
}

@property (nonatomic) _Bool hasDisplayed;
@property (nonatomic) _Bool displayed;
@property (nonatomic) _Bool hasTriggered;
@property (nonatomic) _Bool triggered;
@property (nonatomic) _Bool hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) _Bool hasPreviousStopMuid;
@property (nonatomic) unsigned long long previousStopMuid;
@property (nonatomic) _Bool hasAlightStopMuid;
@property (nonatomic) unsigned long long alightStopMuid;
@property (nonatomic) _Bool hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) _Bool hasTriggeredTimestamp;
@property (nonatomic) double triggeredTimestamp;
@property (nonatomic) _Bool hasTriggeredLocationTraversalPercent;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) _Bool hasLastDetectedLocationTimestamp;
@property (nonatomic) double lastDetectedLocationTimestamp;
@property (nonatomic) _Bool hasLastDetectedLocationTraversalPercent;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) _Bool hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) _Bool hasArrivalDetected;
@property (nonatomic) _Bool arrivalDetected;
@property (nonatomic) _Bool hasArrivedAtTimestamp;
@property (nonatomic) double arrivedAtTimestamp;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;

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
- (id)triggerAsString:(int)arg1;
- (int)StringAsTrigger:(id)arg1;

@end
