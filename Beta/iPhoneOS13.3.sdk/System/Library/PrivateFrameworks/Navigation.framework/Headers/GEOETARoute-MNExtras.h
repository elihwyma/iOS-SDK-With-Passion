/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <GeoServices/GEOETARoute.h>

@interface GEOETARoute (MNExtras)

@property (nonatomic, readonly) _Bool hasTrafficIncidentAlert;
@property (nonatomic, readonly) _Bool hasValidTrafficIncidentAlert;

- (id)initForRoute:(id)arg1 usingETAsFromOtherRoute:(id)arg2;

@end
