/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOStorefrontView, NSURL;

@interface GEOStorefrontPresentationInfo : NSObject

{
    GEOStorefrontView *_closeUpView;
    GEOStorefrontView *_standOffView;
    NSURL *_overlayImageURL;
}

@property (nonatomic, readonly) GEOStorefrontView *closeUpView;
@property (nonatomic, readonly) GEOStorefrontView *standOffView;
@property (nonatomic, readonly) NSURL *overlayImageURL;

- (id)init;
- (id)initWithStorefrontPresentation:(id)arg1;

@end
