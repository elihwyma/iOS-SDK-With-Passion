/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class NSSet;

@protocol PXPlacesGeotaggedItemDataSourceChange <Swift>

@property (readonly) NSSet *addedItems;
@property (readonly) NSSet *removedItems;
@property (readonly) NSSet *updatedItems;

- (unsigned short)hasChanges;
- (unsigned short)updateWithChange: /* Error: Ran out of types for this method. */;

@end
