/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDAssociatedApp, NSArray, NSString;

@interface GEOAssociatedApp : NSObject

{
    GEOPDAssociatedApp *_geoAssociatedApp;
}

@property (retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp;
@property (nonatomic, readonly) _Bool hasPreferredAppAdamId;
@property (nonatomic, readonly) NSString *preferredAppAdamId;
@property (nonatomic, readonly) NSArray *alternateAppAdamIds;

- (id)initWithGEOPDAssociatedApp:(id)arg1;

@end
