/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString, PXPlacesImageCache;

@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@interface PXPlacesMapPipeline : NSObject

{
    id <PXPlacesMapLayout> _layout;
    id <PXPlacesMapUpdatePlan> _updatePlan;
    id <PXPlacesMapRenderer> _renderer;
    id <PXPlacesMapSelectionHandler> _selectionHandler;
    PXPlacesImageCache *_imageCache;
}

@property (nonatomic, readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <PXPlacesMapLayout> layout;
@property (readonly) id <PXPlacesMapUpdatePlan> updatePlan;
@property (readonly) id <PXPlacesMapRenderer> renderer;
@property (readonly) id <PXPlacesMapSelectionHandler> selectionHandler;
@property (retain) PXPlacesImageCache *imageCache;

- (void)cancel;
- (id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4;
- (id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)executeRemoval;

@end
