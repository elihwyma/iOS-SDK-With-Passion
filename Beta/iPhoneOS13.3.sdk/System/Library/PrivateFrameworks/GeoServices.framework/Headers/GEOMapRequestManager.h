/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableSet, geo_isolater;

@interface GEOMapRequestManager : NSObject

{
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}

- (id)init;
- (void)dealloc;
- (void)trackRequest:(id)arg1;
- (void)requestComplete:(id)arg1;

@end
