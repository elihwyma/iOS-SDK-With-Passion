/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKImageCanvas.h>

@class NSString, VKCamera, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas : VKImageCanvas

{
    VKMapModel *_mapModel;
    VKCamera *_camera;
    struct MapEngine *_mapEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setMapType:(int)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)clearScene;
- (void)updateWithTimestamp:(double)arg1;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (id)initWithMapEngine:(struct MapEngine *)arg1;
- (void)resetCameraController;
- (void)cancelTileRequests;

@end
