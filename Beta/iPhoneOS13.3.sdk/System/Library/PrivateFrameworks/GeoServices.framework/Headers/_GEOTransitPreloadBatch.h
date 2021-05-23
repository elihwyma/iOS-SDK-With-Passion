/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList, NSMutableArray, NSMutableSet;

@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _GEOTransitPreloadBatch : NSObject

{
    GEOTileKeyList *_tilesToLoad;
    NSMutableSet *_placeDatasToLoad;
    unsigned long long status;
    unsigned long long generation;
    unsigned long long errCount;
    unsigned long long bytesLoaded;
    unsigned long long bytesLoadedFromNetwork;
    double startTime;
    double endTime;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> coords;
    NSMutableArray *_latLngToLoad;
    unsigned int priority;
    id <GEOMapServiceTicket> placeDataRequestTicketForBatch;
    double endTimeForScheduleFreshness;
}

@property (retain, nonatomic) GEOTileKeyList *tilesToLoad;
@property (retain, nonatomic) NSMutableSet *placeDatasToLoad;

- (id)init;
- (id).cxx_construct;
- (double)dataRateKB;
- (double)networkDataRateKB;

@end
