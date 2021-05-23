/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKTransitItemReferenceDateUpdater.h>

@class MKMapItem, NSDate, NSTimer;

@protocol MKTransitMapItemUpdaterDelegate;

@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater

{
    _Bool _lastInfoRefreshFailed;
    _Bool _refreshing;
    MKMapItem *_mapItem;
    NSTimer *_dataRefreshTimer;
    NSDate *_suggestedDataRefreshDate;
}

@property (nonatomic, readonly) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKTransitMapItemUpdaterDelegate> delegate;
@property (nonatomic) _Bool lastInfoRefreshFailed;
@property (nonatomic, getter=isRefreshing) _Bool refreshing;
@property (retain, nonatomic) NSTimer *dataRefreshTimer;
@property (retain, nonatomic) NSDate *suggestedDataRefreshDate;

- (void)setActive:(_Bool)arg1;
- (void)_transitInfoUpdated;
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;
- (_Bool)isStuckWithExpiredInfoRelativeToDate:(id)arg1;
- (void)_resumeDataRefreshTimer;
- (void)_suspendDataRefreshTimer;
- (void)_scheduleDataUpdateForTransitItemAtDate:(id)arg1;
- (void)_refreshTransitInfoIfNeeded;
- (void)_processUpdatedMapItems:(id)arg1 identifier:(id)arg2 ttl:(double)arg3 error:(id)arg4;
- (_Bool)_isInfoExpiredRelativeToDate:(id)arg1;

@end
