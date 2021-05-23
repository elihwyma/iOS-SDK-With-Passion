/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOPreloadStep : NSObject

{
    CDStruct_2c43369c coord;
    double routeIdx;
    GEOTileKeyList *wantedTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoaded;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    unsigned int numRetries;
    unsigned int hasError:1;
    unsigned int hasLifetimeError:1;
    unsigned int nearManeuver:1;
    unsigned int loading:1;
    unsigned int loaded:1;
    unsigned int preempted:1;
}

- (_Bool)okToLoad;
- (void)resetErrors;
- (double)dataRateKB;
- (double)networkDataRateKB;

@end
