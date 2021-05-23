/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList, NSMutableArray, NSMutableSet, _GEOTransitPreloadCamera;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutePreloaderData : NSObject

{
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableSet *_placecardsReceived;
    NSMutableSet *_placecardsMissed;
    NSMutableArray *_preloadBatches;
    _Bool _isSufficientlyLoaded;
    unsigned long long _currentBatchGeneration;
    _GEOTransitPreloadCamera *_camera;
}

@property (retain, nonatomic) GEOTileKeyList *tilesLoadingOrLoaded;
@property (retain, nonatomic) GEOTileKeyList *tilesReceived;
@property (retain, nonatomic) GEOTileKeyList *tilesMissed;
@property (retain, nonatomic) NSMutableSet *placecardsReceived;
@property (retain, nonatomic) NSMutableSet *placecardsMissed;
@property (retain, nonatomic) NSMutableArray *preloadBatches;
@property (nonatomic) _Bool isSufficientlyLoaded;
@property (nonatomic) unsigned long long currentBatchGeneration;
@property (retain, nonatomic) _GEOTransitPreloadCamera *camera;

- (id)init;

@end
