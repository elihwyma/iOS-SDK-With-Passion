/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject

{
    NSMutableOrderedSet *_layoutGeotaggables;
    struct CLLocationCoordinate2D _coordinate;
}

@property (retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) NSOrderedSet *geotaggables;

- (_Bool)isEqual:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isEqualToLayoutItem:(id)arg1;
- (void)addGeotaggable:(id)arg1;
- (void)addGeotaggables:(id)arg1;

@end
