/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable;

@interface GEOSpatialPlaceLookupResult : NSObject

{
    NSMapTable *_parametersToMapItemsMap;
}

- (id)init;
- (id)initWithMapTable:(id)arg1;
- (id)mapItemsForSpatialLookupParameters:(id)arg1;

@end
