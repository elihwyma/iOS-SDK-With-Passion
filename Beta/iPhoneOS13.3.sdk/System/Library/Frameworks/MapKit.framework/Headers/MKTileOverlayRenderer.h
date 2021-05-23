/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayRenderer.h>

@class GEOTileKeyList, NSObject;

@protocol OS_dispatch_queue;

@interface MKTileOverlayRenderer : MKOverlayRenderer

{
    GEOTileKeyList *_pendingRequests;
    NSObject<OS_dispatch_queue> *_pendingRequestsLock;
}

- (void)reloadData;
- (id)initWithOverlay:(id)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (_Bool)_mayExtendOutsideBounds;
- (id)initWithTileOverlay:(id)arg1;

@end
