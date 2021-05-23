/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class PXPlacesImageCache;

@protocol PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@protocol PXPlacesMapPipelineComponentProvider <Swift>

@property (readonly) id <PXPlacesMapLayout> layout;
@property (readonly) id <PXPlacesMapUpdatePlan> updatePlan;
@property (readonly) id <PXPlacesMapRenderer> renderer;
@property (readonly) id <PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) PXPlacesImageCache *imageCache;

@end
