/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCReportingController.h>

@class NSObject, NSString, SSVPlayActivityController;

@protocol OS_dispatch_queue;

@interface MPCJinglePlayActivityReportingController : MPCReportingController

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    _Bool _nonCatalogOffline;
    _Bool _nonCatalogSBEnabled;
    unsigned long long _nonCatalogStoreAccountID;
    NSString *_nonCatalogBuildVersion;
    NSString *_nonCatalogStoreFrontID;
    unsigned long long _nonCatalogSourceType;
    _Bool _shouldReportAggregateTimePlayActivityEvents;
    _Bool _shouldReportPlayActivityEvents;
    SSVPlayActivityController *_playActivityController;
}

@property (nonatomic, readonly) SSVPlayActivityController *playActivityController;
@property (nonatomic) _Bool shouldReportAggregateTimePlayActivityEvents;
@property (nonatomic) _Bool shouldReportPlayActivityEvents;

- (id)init;
- (void)dealloc;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_recordReportingEvents:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
