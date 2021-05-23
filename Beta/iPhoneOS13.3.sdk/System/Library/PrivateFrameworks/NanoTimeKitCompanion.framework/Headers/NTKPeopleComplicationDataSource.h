/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NSObject, NSString, NTKPeopleComplicationEntry;

@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isPaused;
    _Bool _needsInvalidation;
    NSString *_contactID;
    NTKPeopleComplicationEntry *_timelineEntry;
    NTKPeopleComplicationEntry *_switcherEntry;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)_invalidateIfNeeded;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (id)currentSwitcherTemplate;
- (id)lockedTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)_loadTimelineEntry;
- (void)_queue_reloadTimelineEntry;
- (void)_didReceiveContactsCachceChangedNotification;

@end
