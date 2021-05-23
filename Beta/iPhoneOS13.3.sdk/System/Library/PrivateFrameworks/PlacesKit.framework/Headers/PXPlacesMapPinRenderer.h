/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

#import <PlacesKit/Swift-Protocol.h>

@class NSString;

@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPinRenderer : NSObject <Swift>

{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) struct UIEdgeInsets minimumEdgeInsets;

- (void)reset;
- (long long)annotationType;
- (_Bool)supportsMoveAnimations;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;

@end
