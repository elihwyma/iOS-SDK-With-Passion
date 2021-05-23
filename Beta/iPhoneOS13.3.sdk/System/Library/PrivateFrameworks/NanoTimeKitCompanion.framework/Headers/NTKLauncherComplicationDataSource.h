/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (id)_appTitle;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)timelineAnimationBehavior;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)_currentTimelineEntry;
- (id)_modularSmallTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_utilitarianLargeTemplate;
- (id)_circularTemplateMedium:(_Bool)arg1;
- (id)_modularLargeTemplate;
- (id)_extraLarge;
- (id)_appTintColor;
- (id)_complicationLaunchURL;
- (id)_complicationApplicationIdentifier;
- (id)_tintableAppImageProvider;
- (id)_fullColorImageProvider;
- (void)_addBackgroundColorToTemplate:(id)arg1;
- (id)_appBackgroundColor;
- (id)_tinCanAppTintColor;

@end
