/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class NSOrderedSet;

@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@protocol PXPlacesMapRenderable <Swift>

@property (weak) id <PXPlacesMapRenderer> renderer;
@property (weak) id <PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) NSOrderedSet *geotaggables;
@property (nonatomic) long long index;

@end
