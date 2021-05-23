/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOModuleLayoutEntry, GEOPDPlacecardLayoutConfiguration;

@interface GEOPlacecardLayoutConfiguration : NSObject

{
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
}

@property (nonatomic, readonly) GEOModuleLayoutEntry *currentModuleLayoutEntry;

- (id)initWithPlacecardLayoutConfiguration:(id)arg1;

@end
