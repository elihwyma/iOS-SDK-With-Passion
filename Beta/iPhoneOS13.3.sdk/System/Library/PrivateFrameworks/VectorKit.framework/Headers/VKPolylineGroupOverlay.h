/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject

{
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet *_observers;
    VKPolylineOverlay *_selectedPolyline;
    VKPolylineOverlay *_focusedPolyline;
    _Bool _containsTransit;
    _Bool _showTraffic;
}

@property (nonatomic, readonly) NSSet *polylines;
@property (retain, nonatomic) VKPolylineOverlay *selectedPolyline;
@property (retain, nonatomic) VKPolylineOverlay *focusedPolyline;
@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) _Bool containsTransit;
@property (nonatomic) _Bool showTraffic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;
- (void)addPolyline:(id)arg1;
- (void)removePolyline:(id)arg1;

@end
