/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapItemURLExtras : NSObject

+ (id)urlToPresentAction:(id)arg1 present:(id)arg2;
+ (id)urlToPresentDirectionsForItems:(id)arg1 options:(id)arg2;
+ (id)_mapItemsFromPresentAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_mapItemsFromDirectionsAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)urlToPresentDirectionsFromCurrentLocationToMapItem:(id)arg1 withOptions:(id)arg2;
+ (id)mapItemsFromURL:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;

@end
