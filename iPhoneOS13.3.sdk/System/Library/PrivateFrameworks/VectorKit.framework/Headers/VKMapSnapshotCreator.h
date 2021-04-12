//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/MapEngineDelegate-Protocol.h>
#import <VectorKit/VKNotificationObserverDelegate-Protocol.h>

@class GEOPOICategoryFilter, VKGlobeImageCanvas, VKMapImageCanvas, VKNotificationObserver, VKRouteContext;
@protocol VKRouteOverlay;

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate>
{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    int _mapType;
    CDStruct_80aa614a _mapDisplayStyle;
    GEOPOICategoryFilter *_pointsOfInterestFilter;
    struct VKEdgeInsets _edgeInsets;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    id /* CDUnknownBlockType */ _completion;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr_e963992e _taskContext;
    BOOL _didSoftDealloc;
    VKNotificationObserver *_notificationObserver;
    NSUInteger _signpostId;
    id <VKRouteOverlay> _routeOverlay;
    VKRouteContext *_routeContext;
}

+ (BOOL)supportsSharingThumbnails;
@property(retain, nonatomic) VKRouteContext *routeContext; // @synthesize routeContext=_routeContext;
@property(retain, nonatomic) id <VKRouteOverlay> routeOverlay; // @synthesize routeOverlay=_routeOverlay;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter; // @synthesize pointsOfInterestFilter=_pointsOfInterestFilter;
@property(nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 )arg1;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 )arg1;
- (void)labelManagerDidLayout;
- (void)didStartLoadingData;
- (void)didFinishLoadingDataWithError:(id)arg1;
- (void)didFinishLoadingData;
- (void)nearestVenueDidChange:(const struct Venue )arg1 building:(const struct VenueBuilding )arg2;
- (BOOL)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1;
- (void)didReceiveMemoryWarning;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)willBecomeFullyDrawn;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)cancel;
- (void)renderSnapshot:(id /* CDUnknownBlockType */)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)lookAtX:(NSUInteger)arg1 y:(NSUInteger)arg2 z:(NSUInteger)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL showsVenues;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointLabels;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) BOOL localizeLabels;
- (struct LabelSettings )_labelSettings;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) unsigned char emphasis;
@property(nonatomic) int mapType;
@property(readonly) CGSize size;
- (id)activeCanvas;
- (void)softDealloc;
- (void)dealloc;
- (id)initWithSize:(CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(NSUInteger)arg4 auditToken:(id)arg5;

@end

