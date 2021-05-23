/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class NSSet;

@protocol PXPlacesGeotaggedItemDataSourceDelegate;

@protocol PXPlacesGeotaggedItemDataSource <Swift>

@property (weak) id <PXPlacesGeotaggedItemDataSourceDelegate> delegate;
@property (readonly) NSSet *allItems;
@property (nonatomic, readonly) long long numberOfItems;

- (unsigned short)findItemsInMapRect: /* Error: Ran out of types for this method. */;
- (unsigned short)minimalEncompassingMapRect;

@end
