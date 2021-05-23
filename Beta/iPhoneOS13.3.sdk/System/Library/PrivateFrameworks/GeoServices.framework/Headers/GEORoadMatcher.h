/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject

{
    GEOMapFeatureAccess *_mapFeatureAccess;
    _Bool _useRawLocations;
}

@property (nonatomic) _Bool useRawLocations;

- (id)init;
- (void)dealloc;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2;

@end
