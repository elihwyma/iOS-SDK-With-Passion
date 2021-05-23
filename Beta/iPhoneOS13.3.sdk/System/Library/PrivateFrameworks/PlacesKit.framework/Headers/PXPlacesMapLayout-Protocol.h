/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@protocol PXPlacesGeotaggedItemDataSource;

@protocol PXPlacesMapLayout <Swift>

@property (readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;

- (unsigned short)layoutForViewPort:andDataSourceChange: /* Error: Ran out of types for this method. */;
- (unsigned short)layoutItemForGeotaggable: /* Error: Ran out of types for this method. */;

@end
