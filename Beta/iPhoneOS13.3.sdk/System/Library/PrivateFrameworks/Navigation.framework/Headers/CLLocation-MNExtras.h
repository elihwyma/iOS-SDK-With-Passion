/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <CoreLocation/CLLocation.h>

@class GEONavigationMatchInfo, GEORouteMatch, NSString;

@interface CLLocation (MNExtras)

@property (nonatomic, readonly, getter=_navigation_locationDescription) NSString *locationDescription;
@property (nonatomic, readonly, getter=_navigation_isStale) _Bool isStale;
@property (nonatomic, readonly, getter=_navigation_hasValidCourse) _Bool hasValidCourse;
@property (nonatomic, readonly, getter=_navigation_routeMatch) GEORouteMatch *routeMatch;
@property (nonatomic, readonly, getter=_navigation_courseAccuracy) double courseAccuracy;
@property (nonatomic, readonly, getter=_navigation_hasMatch) _Bool hasMatch;
@property (nonatomic, getter=_navigation_gtLog, setter=_navigation_setGtLog:) _Bool gtLog;
@property (nonatomic, readonly, getter=_navigation_rawShiftedCoordinate) struct CLLocationCoordinate2D rawShiftedCoordinate;
@property (nonatomic, readonly, getter=_navigation_detailedMatchInfo) GEONavigationMatchInfo *detailedMatchInfo;

+ (id)_navigation_stringWithType:(int)arg1;
+ (_Bool)_navigation_isLocation:(id)arg1 equalTo:(id)arg2;

- (_Bool)_navigation_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)_navigation_speedAccuracy;
- (id)initWithGeoLocation:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 rawCoordinate:(struct CLLocationCoordinate2D)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13;
- (id)_navigation_geoLocation;

@end
