/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource

{
    CLKComplicationTemplate *_complicationTemplate;
}

+ (_Bool)_isComplicationFamilyAvaialbleBeforeGlory:(long long)arg1;
+ (_Bool)acceptsClassicComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (void)dealloc;
- (id)_dateTemplate;
- (id)_city;
- (void)_localeDidChange:(id)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)currentSwitcherTemplate;
- (id)_alarmTemplate;
- (id)_timerTemplate;
- (id)_stopwatchTemplate;
- (id)_worldClockTemplate;
- (id)_batteryTemplate;
- (id)_heartrateTemplate;
- (id)_sunriseTemplate;
- (id)_wellnessTemplate;
- (id)_nextEventTemplate;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_radioTemplate;
- (id)_podcastTemplate;
- (id)_nowPlayingTemplate;
- (id)_workoutTemplate;
- (id)_breathingTemplate;
- (id)_reminderTemplate;
- (id)_stocksTemplate;
- (id)_newsTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)arg1;
- (id)_wellnessStatisticsForData:(id)arg1 unit:(id)arg2;
- (id)_wellnessStatisticsForStandHours:(id)arg1;
- (id)_currentEntryModel;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;

@end
