/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject

{
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)muid;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithGEOMapItemIdentifier:(id)arg1;
- (id)geoMapItemIdentifier;

@end
