/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *addPhotoURLs;

- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)urlsForPhotoWithIdentifier:(id)arg1;
- (_Bool)canShowPhotosLocally;

@end
