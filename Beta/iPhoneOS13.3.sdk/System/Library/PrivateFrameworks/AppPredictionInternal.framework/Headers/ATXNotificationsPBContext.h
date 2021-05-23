/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXNotificationsPBContentFeatures;

@interface ATXNotificationsPBContext : PBCodable

{
    float _appLaunchPopularity;
    float _cleared;
    ATXNotificationsPBContentFeatures *_contentFeatures;
    float _defaction;
    float _engaged;
    float _ignored;
    int _location;
    int _motionAtRecieve;
    float _orb;
    float _received;
    float _suppaction;
    float _tapcoa;
    float _totalLaunches;
    int _visits;
    _Bool _isStationary;
    struct {
        unsigned int appLaunchPopularity:1;
        unsigned int cleared:1;
        unsigned int defaction:1;
        unsigned int engaged:1;
        unsigned int ignored:1;
        unsigned int location:1;
        unsigned int motionAtRecieve:1;
        unsigned int orb:1;
        unsigned int received:1;
        unsigned int suppaction:1;
        unsigned int tapcoa:1;
        unsigned int totalLaunches:1;
        unsigned int visits:1;
        unsigned int isStationary:1;
    } _has;
}

@property (nonatomic) _Bool hasReceived;
@property (nonatomic) float received;
@property (nonatomic) _Bool hasEngaged;
@property (nonatomic) float engaged;
@property (nonatomic) _Bool hasIgnored;
@property (nonatomic) float ignored;
@property (nonatomic) _Bool hasCleared;
@property (nonatomic) float cleared;
@property (nonatomic) _Bool hasAppLaunchPopularity;
@property (nonatomic) float appLaunchPopularity;
@property (nonatomic) _Bool hasTotalLaunches;
@property (nonatomic) float totalLaunches;
@property (nonatomic) _Bool hasMotionAtRecieve;
@property (nonatomic) int motionAtRecieve;
@property (nonatomic) _Bool hasIsStationary;
@property (nonatomic) _Bool isStationary;
@property (nonatomic, readonly) _Bool hasContentFeatures;
@property (retain, nonatomic) ATXNotificationsPBContentFeatures *contentFeatures;
@property (nonatomic) _Bool hasLocation;
@property (nonatomic) int location;
@property (nonatomic) _Bool hasVisits;
@property (nonatomic) int visits;
@property (nonatomic) _Bool hasDefaction;
@property (nonatomic) float defaction;
@property (nonatomic) _Bool hasOrb;
@property (nonatomic) float orb;
@property (nonatomic) _Bool hasSuppaction;
@property (nonatomic) float suppaction;
@property (nonatomic) _Bool hasTapcoa;
@property (nonatomic) float tapcoa;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)motionAtRecieveAsString:(int)arg1;
- (int)StringAsMotionAtRecieve:(id)arg1;
- (id)locationAsString:(int)arg1;
- (int)StringAsLocation:(id)arg1;

@end
