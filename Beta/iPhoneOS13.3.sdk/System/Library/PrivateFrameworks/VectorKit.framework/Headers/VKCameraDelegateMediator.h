/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject

{
    id <VKMapViewCameraDelegate> _cameraDelegate;
    _Bool _isChangingMapType;
    unsigned long long _regionChangeCount;
}

@property (nonatomic) id <VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) _Bool isChangingMapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerWillChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerDidBecomePitched:(_Bool)arg1;
- (void)mapLayerCanEnter3DModeDidChange:(_Bool)arg1;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerCanZoomInDidChange:(_Bool)arg1;
- (void)mapLayerCanZoomOutDidChange:(_Bool)arg1;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerWasUnableToAnimate;

@end
