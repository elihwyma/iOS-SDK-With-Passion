/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject

{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

- (void)reset;
- (id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2;

@end
