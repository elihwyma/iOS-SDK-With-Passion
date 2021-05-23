/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEONavigationGuidanceState : PBCodable

{
    int _guidanceLevelIgnoringTimeCriterion;
    int _guidanceLevel;
    int _navigationState;
    int _trackedTransportType;
    _Bool _shouldSuppressCellularDataAlerts;
    struct {
        unsigned int has_guidanceLevelIgnoringTimeCriterion:1;
        unsigned int has_guidanceLevel:1;
        unsigned int has_navigationState:1;
        unsigned int has_trackedTransportType:1;
        unsigned int has_shouldSuppressCellularDataAlerts:1;
    } _flags;
}

@property (nonatomic) _Bool hasTrackedTransportType;
@property (nonatomic) int trackedTransportType;
@property (nonatomic) _Bool hasNavigationState;
@property (nonatomic) int navigationState;
@property (nonatomic) _Bool hasGuidanceLevel;
@property (nonatomic) int guidanceLevel;
@property (nonatomic) _Bool hasShouldSuppressCellularDataAlerts;
@property (nonatomic) _Bool shouldSuppressCellularDataAlerts;
@property (nonatomic) _Bool hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;

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
- (id)trackedTransportTypeAsString:(int)arg1;
- (int)StringAsTrackedTransportType:(id)arg1;
- (id)navigationStateAsString:(int)arg1;
- (int)StringAsNavigationState:(id)arg1;
- (id)guidanceLevelAsString:(int)arg1;
- (int)StringAsGuidanceLevel:(id)arg1;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1;
- (id)initWithTransportType:(int)arg1;
- (id)initWithGuidanceLevel:(int)arg1;

@end
