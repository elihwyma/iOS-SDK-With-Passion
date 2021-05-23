/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@protocol PXPlacesGeotaggedItemDataSource;

@protocol PXPlacesMapOverlayRenderer <Swift>

@property (weak) id <PXPlacesGeotaggedItemDataSource> dataSource;

- (unsigned short)rendererForOverlay:andMapView: /* Error: Ran out of types for this method. */;
- (unsigned short)overlayForLayoutItem: /* Error: Ran out of types for this method. */;

@end
