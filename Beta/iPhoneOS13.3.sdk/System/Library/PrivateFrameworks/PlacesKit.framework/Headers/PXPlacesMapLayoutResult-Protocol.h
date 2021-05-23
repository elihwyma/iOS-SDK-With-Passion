/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class NSOrderedSet, PXPlacesMapViewPort;

@protocol PXPlacesMapLayoutResult <Swift>

@property (nonatomic, readonly) NSOrderedSet *layoutItems;
@property (nonatomic, readonly) PXPlacesMapViewPort *viewPort;

@end
