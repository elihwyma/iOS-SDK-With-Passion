/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKExtendedTraitCollection;

@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapThumbnailRenderer : NSObject

{
    unsigned long long _popoverImageType;
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id _extendedTraitObserver;
}

@property (retain) id <PXPlacesMapGeotaggableInfoDelegate> informationDelegate;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain) id extendedTraitObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) struct UIEdgeInsets minimumEdgeInsets;
@property (readonly) unsigned long long popoverImageType;

- (void)dealloc;
- (void)reset;
- (long long)annotationType;
- (id)initWithTraitCollection:(id)arg1 andInforamtionDelegate:(id)arg2 popoverImageType:(unsigned long long)arg3;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (_Bool)supportsMoveAnimations;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;

@end
