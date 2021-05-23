/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOStorefrontImagery;

@interface GEOStorefrontView : NSObject

{
    unsigned long long _identifier;
    GEOStorefrontImagery *_imageryInfo;
    struct GEOOrientedPosition _lookAt;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) GEOStorefrontImagery *imageryInfo;
@property (nonatomic, readonly) struct GEOOrientedPosition lookAt;

- (id)init;
- (id)initWithStorefrontView:(id)arg1;

@end
