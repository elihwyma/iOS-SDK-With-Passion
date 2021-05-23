/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <CoreLocation/CLLocation.h>

@class GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch, NSDate, NSString;

@interface MNLocation : CLLocation

{
    unsigned long long _state;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    CLLocation *_rawLocation;
    struct CLLocationCoordinate2D _rawShiftedCoordinate;
    GEONavigationMatchInfo *_detailedMatchInfo;
    NSString *_roadName;
    NSString *_shieldText;
    long long _shieldType;
    unsigned int _roadLineType;
    unsigned long long _speedLimit;
    _Bool _speedLimitIsMPH;
    long long _speedLimitShieldType;
    _Bool _isDirectional;
    _Bool _locationUnreliable;
    NSDate *_expirationDate;
    NSDate *_originalDate;
    unsigned long long _traceIndex;
    _Bool _isLeeched;
    int _rampType;
}

@property (nonatomic, readonly) int _nav_source;
@property (nonatomic) unsigned long long traceIndex;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) GEORoadMatch *roadMatch;
@property (retain, nonatomic) CLLocation *rawLocation;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;
@property (copy, nonatomic) NSString *roadName;
@property (copy, nonatomic) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic) int rampType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) _Bool speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) _Bool isDirectional;
@property (nonatomic) _Bool locationUnreliable;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) _Bool isProjected;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *originalDate;
@property (nonatomic) struct CLLocationCoordinate2D rawShiftedCoordinate;
@property (nonatomic) _Bool isLeeched;

- (id)description;
- (id)initWithClientLocation:(CDStruct_88736aa7)arg1;
- (id)matchInfo;
- (CDStruct_123780e2 *)_roadFeature;
- (id)initWithRawLocation:(id)arg1;
- (id)_navigation_routeMatch;
- (_Bool)_navigation_hasValidCourse;
- (_Bool)_navigation_isStale;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2;
- (id)initWithLocationDetails:(id)arg1;
- (struct CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
- (id)_navigation_detailedMatchInfo;
- (id)_referenceFrameAsString:(int)arg1;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(_Bool)arg2;
- (id)initWithGEOLocation:(id)arg1;

@end
