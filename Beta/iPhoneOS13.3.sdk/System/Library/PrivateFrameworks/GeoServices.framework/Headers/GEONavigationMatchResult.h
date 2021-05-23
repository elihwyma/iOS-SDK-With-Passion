/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLocation, GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch;

@interface GEONavigationMatchResult : NSObject

{
    unsigned long long _type;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    GEOLocation *_rawLocation;
    GEONavigationMatchInfo *_detailedMatchInfo;
    _Bool _locationUnreliable;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) GEORoadMatch *roadMatch;
@property (nonatomic, readonly) GEOLocation *rawLocation;
@property (nonatomic, readonly) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readonly) _Bool locationUnreliable;

+ (id)matchResultWithRawLocation:(id)arg1;
+ (id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2;
+ (id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2;

- (void)setRouteMatch:(id)arg1;
- (void)setLocationUnreliable:(_Bool)arg1;
- (void)setDetailedMatchInfo:(id)arg1;
- (id)initWithRouteMatch:(id)arg1 location:(id)arg2;
- (id)initWithRoadMatch:(id)arg1 location:(id)arg2;
- (id)initWithRawLocation:(id)arg1;

@end
