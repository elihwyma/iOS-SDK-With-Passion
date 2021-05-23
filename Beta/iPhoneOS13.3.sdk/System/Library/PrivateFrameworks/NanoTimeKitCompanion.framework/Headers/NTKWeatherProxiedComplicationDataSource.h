/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKWeatherProxiedComplicationDataSource : NTKComplicationDataSource

{
    id _proxy;
}

@property (retain, nonatomic) id proxy;

+ (Class)proxyClass;
+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

- (void)setDelegate:(id)arg1;
- (void)pause;
- (void)resume;
- (void)becomeActive;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (id)lockedTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
