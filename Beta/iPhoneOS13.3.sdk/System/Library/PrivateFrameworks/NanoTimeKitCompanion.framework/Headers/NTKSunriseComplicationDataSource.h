/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLLocation, NSString, NSTimer, NTKTimelineEntryModelCache;

@interface NTKSunriseComplicationDataSource : NTKComplicationDataSource

{
    NTKTimelineEntryModelCache *_entryModelCache;
    _Bool _isWaitingForGeocodeRequest;
    struct NSString *_token;
    CLLocation *_displayedLocation;
    NSString *_locationName;
    CLLocation *_delayedLocation;
    NSTimer *_geocodeRequestDelayTimer;
}

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) CLLocation *displayedLocation;
@property (retain, nonatomic) NSString *locationName;
@property (retain, nonatomic) CLLocation *delayedLocation;
@property (retain, nonatomic) NSTimer *geocodeRequestDelayTimer;
@property (nonatomic) _Bool isWaitingForGeocodeRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)_invalidate;
- (void)_stopObserving;
- (void)_startObserving;
- (void)becomeActive;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)loadEntryModelsForDay:(id)arg1;
- (void)_handleLocation:(id)arg1 error:(id)arg2;
- (id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id *)arg2;
- (id)_timelineEntryFromModel:(id)arg1;
- (id)_currentEntry:(_Bool)arg1;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(long long)arg3;
- (_Bool)_needCurrentEventEntry;
- (id)_animationGroupForNoLocation;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(long long)arg3 haveLocation:(_Bool)arg4;
- (_Bool)_needsToSendGeocodingRequest;
- (void)_geocodeRequestDelayTimerTriggerred;

@end
