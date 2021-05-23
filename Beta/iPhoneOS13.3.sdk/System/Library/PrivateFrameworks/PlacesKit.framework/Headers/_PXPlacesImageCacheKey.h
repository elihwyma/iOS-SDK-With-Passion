/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject

{
    id <PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)key;
- (id)initWithGeotaggable:(id)arg1 andKey:(id)arg2;
- (id)geotaggable;

@end
