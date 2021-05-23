/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOLeaveNowFeedbackCollection : PBCodable

{
    struct GEOSessionID _sessionID;
    double _currentTimestamp;
    double _eventTimestamp;
    double _travelDuration;
    int _actionType;
    int _alertType;
    int _travelState;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_currentTimestamp:1;
        unsigned int has_eventTimestamp:1;
        unsigned int has_travelDuration:1;
        unsigned int has_actionType:1;
        unsigned int has_alertType:1;
        unsigned int has_travelState:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) _Bool hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) _Bool hasTravelState;
@property (nonatomic) int travelState;
@property (nonatomic) _Bool hasEventTimestamp;
@property (nonatomic) double eventTimestamp;
@property (nonatomic) _Bool hasCurrentTimestamp;
@property (nonatomic) double currentTimestamp;
@property (nonatomic) _Bool hasTravelDuration;
@property (nonatomic) double travelDuration;

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
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
- (int)StringAsAlertType:(id)arg1;
- (id)travelStateAsString:(int)arg1;
- (int)StringAsTravelState:(id)arg1;

@end
