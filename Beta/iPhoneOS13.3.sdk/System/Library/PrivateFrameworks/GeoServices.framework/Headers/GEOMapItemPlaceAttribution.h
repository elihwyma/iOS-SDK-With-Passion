/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *checkInURLs;
@property (nonatomic, readonly) NSURL *webURL;

- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;

@end
