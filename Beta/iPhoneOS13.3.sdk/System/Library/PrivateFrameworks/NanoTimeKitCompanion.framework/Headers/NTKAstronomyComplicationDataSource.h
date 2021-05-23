/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLLocation;

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource

{
    struct NSString *_token;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
    unsigned long long _vista;
    _Bool _listeningForNotifications;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)_invalidate;
- (void)pause;
- (void)resume;
- (void)_stopObserving;
- (void)_startObserving;
- (void)becomeActive;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (void)becomeInactive;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)_handleLocationUpdate:(id)arg1 anyLocation:(id)arg2;
- (id)_currentTimelineEntryWithIdealizedDate:(_Bool)arg1;

@end
