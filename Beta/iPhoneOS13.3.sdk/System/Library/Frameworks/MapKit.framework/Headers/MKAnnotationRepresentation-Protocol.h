/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@protocol MKAnnotationRepresentation <Swift>

- (unsigned short)prepareForReuse;
- (unsigned short)isPersistent;
- (unsigned short)reuseIdentifier;
- (unsigned short)viewRepresentation;
- (unsigned short)_shouldDeselectWhenDragged;
- (unsigned short)_setHiddenForOffscreen: /* Error: Ran out of types for this method. */;
- (unsigned short)_invalidateCachedCoordinate;
- (unsigned short)_isPendingSelectionAnimated;

@end
