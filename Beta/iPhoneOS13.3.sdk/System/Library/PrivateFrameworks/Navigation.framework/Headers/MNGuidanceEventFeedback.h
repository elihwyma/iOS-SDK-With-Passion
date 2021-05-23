/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, NSUUID;

@interface MNGuidanceEventFeedback : PBCodable

{
    double _endDistance;
    double _endTime;
    double _maneuverTime;
    double _startDistance;
    double _startTime;
    double _vehicleSpeed;
    unsigned int _enrouteNoticeIndex;
    NSString *_eventDescription;
    unsigned int _eventIndex;
    NSMutableArray *_junctionViewImageIDs;
    NSData *_routeID;
    unsigned int _selectedPrimaryStringIndex;
    unsigned int _selectedSecondaryStringIndex;
    unsigned int _stepID;
    unsigned int _trafficColor;
    int _type;
    NSString *_uniqueIDstring;
    _Bool _shortPrompt;
    struct {
        unsigned int endDistance:1;
        unsigned int endTime:1;
        unsigned int maneuverTime:1;
        unsigned int startDistance:1;
        unsigned int startTime:1;
        unsigned int vehicleSpeed:1;
        unsigned int enrouteNoticeIndex:1;
        unsigned int eventIndex:1;
        unsigned int selectedPrimaryStringIndex:1;
        unsigned int selectedSecondaryStringIndex:1;
        unsigned int stepID:1;
        unsigned int trafficColor:1;
        unsigned int type:1;
        unsigned int shortPrompt:1;
    } _has;
}

@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) _Bool hasUniqueIDstring;
@property (retain, nonatomic) NSString *uniqueIDstring;
@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) _Bool hasEventIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool hasStartDistance;
@property (nonatomic) double startDistance;
@property (nonatomic) _Bool hasVehicleSpeed;
@property (nonatomic) double vehicleSpeed;
@property (nonatomic) _Bool hasTrafficColor;
@property (nonatomic) unsigned int trafficColor;
@property (nonatomic) _Bool hasSelectedPrimaryStringIndex;
@property (nonatomic) unsigned int selectedPrimaryStringIndex;
@property (nonatomic) _Bool hasSelectedSecondaryStringIndex;
@property (nonatomic) unsigned int selectedSecondaryStringIndex;
@property (nonatomic) _Bool hasShortPrompt;
@property (nonatomic) _Bool shortPrompt;
@property (nonatomic) _Bool hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) _Bool hasEndDistance;
@property (nonatomic) double endDistance;
@property (nonatomic) _Bool hasManeuverTime;
@property (nonatomic) double maneuverTime;
@property (retain, nonatomic) NSMutableArray *junctionViewImageIDs;
@property (nonatomic, readonly) _Bool hasEventDescription;
@property (retain, nonatomic) NSString *eventDescription;

+ (Class)junctionViewImageIDType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)addJunctionViewImageID:(id)arg1;
- (unsigned long long)junctionViewImageIDsCount;
- (void)clearJunctionViewImageIDs;
- (id)junctionViewImageIDAtIndex:(unsigned long long)arg1;

@end
