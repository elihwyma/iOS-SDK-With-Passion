/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject

{
    GEOUserSessionEntity *_shortSessionEntity;
    GEOUserSessionEntity *_longSessionEntity;
    GEOUserSessionEntity *_thirtyDayCountsSessionEntity;
    GEOUserSessionEntity *_navSessionEntity;
    GEOUserSessionEntity *_cohortSessionEntity;
    double _usageEventTime;
}

@property (retain, nonatomic) GEOUserSessionEntity *shortSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *longSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *thirtyDayCountsSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *navSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *cohortSessionEntity;
@property (nonatomic) double usageEventTime;

- (id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 thirtyDayCountsSessionEntity:(id)arg3 navSessionEntity:(id)arg4 cohortSessionEntity:(id)arg5;

@end
