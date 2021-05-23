/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATXNotificationsPBResponse : PBCodable

{
    float _appPopularity;
    NSString *_bundleId;
    float _cleared;
    NSString *_country;
    float _defaultActions;
    float _engaged;
    float _ignored;
    float _orbs;
    float _received;
    int _response;
    int _stype;
    float _suppActions;
    float _tapCoalesce;
    NSString *_topic;
    float _totalLaunches;
    struct {
        unsigned int appPopularity:1;
        unsigned int cleared:1;
        unsigned int defaultActions:1;
        unsigned int engaged:1;
        unsigned int ignored:1;
        unsigned int orbs:1;
        unsigned int received:1;
        unsigned int response:1;
        unsigned int stype:1;
        unsigned int suppActions:1;
        unsigned int tapCoalesce:1;
        unsigned int totalLaunches:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) _Bool hasResponse;
@property (nonatomic) int response;
@property (nonatomic) _Bool hasReceived;
@property (nonatomic) float received;
@property (nonatomic) _Bool hasEngaged;
@property (nonatomic) float engaged;
@property (nonatomic) _Bool hasIgnored;
@property (nonatomic) float ignored;
@property (nonatomic) _Bool hasCleared;
@property (nonatomic) float cleared;
@property (nonatomic) _Bool hasStype;
@property (nonatomic) int stype;
@property (nonatomic) _Bool hasAppPopularity;
@property (nonatomic) float appPopularity;
@property (nonatomic) _Bool hasTotalLaunches;
@property (nonatomic) float totalLaunches;
@property (nonatomic) _Bool hasDefaultActions;
@property (nonatomic) float defaultActions;
@property (nonatomic) _Bool hasOrbs;
@property (nonatomic) float orbs;
@property (nonatomic) _Bool hasSuppActions;
@property (nonatomic) float suppActions;
@property (nonatomic) _Bool hasTapCoalesce;
@property (nonatomic) float tapCoalesce;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)responseAsString:(int)arg1;
- (int)StringAsResponse:(id)arg1;
- (id)stypeAsString:(int)arg1;
- (int)StringAsStype:(id)arg1;

@end
