/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject

{
    NSMapTable *_parametersToEventsMap;
}

- (id)init;
- (id)initWithMapTable:(id)arg1;
- (id)poiEventsForSpatialLookupParameters:(id)arg1;

@end
