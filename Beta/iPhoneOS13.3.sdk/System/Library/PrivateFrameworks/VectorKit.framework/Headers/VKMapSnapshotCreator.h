/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOPOICategoryFilter, NSString, VKGlobeImageCanvas, VKMapImageCanvas, VKNotificationObserver, VKRouteContext;

@protocol VKRouteOverlay;

@interface VKMapSnapshotCreator : NSObject

{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    int _mapType;
    CDStruct_80aa614a _mapDisplayStyle;
    GEOPOICategoryFilter *_pointsOfInterestFilter;
    struct VKEdgeInsets _edgeInsets;
    _Bool _didBecomeFullyDrawn;
    _Bool _hasFailedTiles;
    CDUnknownBlockType _completion;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr_e963992e _taskContext;
    _Bool _didSoftDealloc;
    VKNotificationObserver *_notificationObserver;
    unsigned long long _signpostId;
    id <VKRouteOverlay> _routeOverlay;
    VKRouteContext *_routeContext;
}

@property (readonly) struct CGSize size;
@property (nonatomic) int mapType;
@property (nonatomic) CDStruct_80aa614a mapDisplayStyle;
@property (nonatomic) unsigned char emphasis;
@property (nonatomic) struct VKEdgeInsets edgeInsets;
@property (nonatomic) _Bool localizeLabels;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) _Bool showsPointsOfInterest;
@property (retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter;
@property (nonatomic) _Bool showsPointLabels;
@property (nonatomic) _Bool showsBuildings;
@property (nonatomic) _Bool showsVenues;
@property (retain, nonatomic) id <VKRouteOverlay> routeOverlay;
@property (retain, nonatomic) VKRouteContext *routeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSharingThumbnails;

- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;
- (void)didReceiveMemoryWarning;
- (void)didPresent;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(unsigned long long)arg4 auditToken:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)renderSnapshot:(CDUnknownBlockType)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)cancelFlushingTileDecodes:(_Bool)arg1;
- (struct LabelSettings *)_labelSettings;
- (_Bool)wantsTimerTick;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (void)didStartLoadingData;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(id)arg1;
- (void)willBecomeFullyDrawn;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)labelManagerDidLayout;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)willLayoutWithTimestamp:(double)arg1;
- (void)softDealloc;
- (id)activeCanvas;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;

@end
