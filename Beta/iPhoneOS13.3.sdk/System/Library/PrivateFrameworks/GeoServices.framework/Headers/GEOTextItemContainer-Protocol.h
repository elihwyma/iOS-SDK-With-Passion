/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray;

@protocol GEOTextItemDisplayConfig;

@protocol GEOTextItemContainer

@property (nonatomic, readonly) id <GEOTextItemDisplayConfig> displayConfig;
@property (nonatomic, readonly) NSArray *textItems;

@end
